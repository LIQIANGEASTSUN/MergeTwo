
Shader "HomeLand/GuideMaskHole"
{
	Properties
	{
    	[PerRendererData] _MainTex("Sprite Texture", 2D) = "white" {}

		// [PerRendererData] _MainTex ("Texture", 2D) = "white" {}
        [HideInInspector]_StencilComp ("Stencil Comparison", Float) = 8
		[HideInInspector]_Stencil ("Stencil ID", Float) = 0
		[HideInInspector]_StencilOp ("Stencil Operation", Float) = 0
		[HideInInspector]_StencilWriteMask ("Stencil Write Mask", Float) = 255
		[HideInInspector]_StencilReadMask ("Stencil Read Mask", Float) = 255
	}

	SubShader
	{
		Tags
		{
			"Queue" = "Transparent"
            "IgnoreProjector"="True"
            "RenderType"="Transparent"
        }
		// No culling or depth
		Cull Off
		ZWrite Off
		ZTest Always
		Blend SrcAlpha OneMinusSrcAlpha

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
				float4 color : COLOR;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
				float4 color : COLOR;
			};

			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = v.uv;
				o.color = v.color;
				return o;
			}

			sampler2D _MainTex;
			uniform float4 _Centers[5];
			uniform float _Widths[5];
			uniform float _Heights[5];
			uniform float _Types[5];
			uniform float _Feather;
			uniform int _HasHoles;
			uniform float _DesignWidth;
			uniform float _DesignHeight;
			uniform float _ScreenScaleFactor;

			float4 frag (v2f input) : SV_TARGET
			{
				float4 c;
				fixed4 screen = tex2D(_MainTex, input.uv);
				float factor = 1;
				float fittedFeather = max(_Feather * _ScreenScaleFactor, 1);

				if (_HasHoles > 0)
				{
					float _distance = 0;

					for (int i = 0; i < _HasHoles; i++)
					{
						switch(_Types[i])
						{
							case 1:
								{
									float radius = _Widths[i];
									float2 fittedCenter = float2(_Centers[i].x / _DesignWidth, _Centers[i].y / _DesignHeight);
									_distance = length(input.uv * _ScreenParams - fittedCenter * _ScreenParams);
									factor = min(factor, max(0, _distance - radius * _ScreenScaleFactor) / fittedFeather * 1);
								}
								break;
							case 2:
								{
									float2 fittedCenter = float2(_Centers[i].x / _DesignWidth, _Centers[i].y / _DesignHeight) * _ScreenParams;
									float2 inputPixelPos = input.uv * _ScreenParams;
									float widthDiff = max(0, abs(inputPixelPos.x - fittedCenter.x) - _Widths[i]);
									float heightDiff = max(0, abs(inputPixelPos.y - fittedCenter.y) - _Heights[i]);

									float _max = min(_Feather, max(widthDiff, heightDiff));
									factor = min(factor,_max / _Feather);
								}
								break;
						}
					}
				}

				float4 a = float4(1, 1, 1, factor);
				c = (screen * input.color) * a;
				return c;
			}
			ENDCG
		}
	}

	//遮罩回退最基本的shader
	SubShader
    {
        Tags
        {
            "Queue"="Transparent"
            "IgnoreProjector"="True"
            "RenderType"="Transparent"
            "PreviewType"="Plane"
            "CanUseSpriteAtlas"="True"
        }

        Stencil
        {
            Ref [_Stencil]
            Comp [_StencilComp]
            Pass [_StencilOp]
            ReadMask [_StencilReadMask]
            WriteMask [_StencilWriteMask]
        }

        Cull Off
        Lighting Off
        ZWrite Off
        ZTest [unity_GUIZTestMode]
        Blend SrcAlpha OneMinusSrcAlpha
        ColorMask [_ColorMask]

        Pass
        {
            Name "Default"
			CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
				#pragma target 2.0

				#include "UnityCG.cginc"
				#include "UnityUI.cginc"

				#pragma multi_compile __ UNITY_UI_ALPHACLIP

				struct appdata_t
				{
					float4 vertex   : POSITION;
					float4 color    : COLOR;
					float2 texcoord : TEXCOORD0;
					UNITY_VERTEX_INPUT_INSTANCE_ID
				};

				struct v2f
				{
					float4 vertex   : SV_POSITION;
					fixed4 color    : COLOR;
					float2 texcoord  : TEXCOORD0;
					float4 worldPosition : TEXCOORD1;
					UNITY_VERTEX_OUTPUT_STEREO
				};

				fixed4 _Color;
				fixed4 _TextureSampleAdd;
				float4 _ClipRect;

				v2f vert(appdata_t v)
				{
					v2f OUT;
					UNITY_SETUP_INSTANCE_ID(v);
					UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);
					OUT.worldPosition = v.vertex;
					OUT.vertex = UnityObjectToClipPos(OUT.worldPosition);

					OUT.texcoord = v.texcoord;

					OUT.color = v.color * _Color;
					return OUT;
				}

				sampler2D _MainTex;

				fixed4 frag(v2f IN) : SV_Target
				{
					half4 color = (tex2D(_MainTex, IN.texcoord) + _TextureSampleAdd) * IN.color;

					color.a *= UnityGet2DClipping(IN.worldPosition.xy, _ClipRect);

					#ifdef UNITY_UI_ALPHACLIP
					clip (color.a - 0.001);
					#endif

					return color;
				}
			ENDCG
        }
    }
}
