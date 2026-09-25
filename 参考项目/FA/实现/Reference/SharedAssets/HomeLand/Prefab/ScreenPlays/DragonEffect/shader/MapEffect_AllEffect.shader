// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "MapEffect/AllEffect"
{
	Properties
	{
		[Enum(UnityEngine.Rendering.BlendMode)]_Scr("Scr", Float) = 5
		[Enum(UnityEngine.Rendering.BlendMode)]_Dst("Dst", Float) = 10
		[Enum(UnityEngine.Rendering.CullMode)]_CullMode("CullMode", Float) = 0
		_MainTex("MainTex", 2D) = "white" {}
		[Toggle]_MainTexAR("MainTexAR", Float) = 0
		[HDR]_MainColor("MainColor", Color) = (1,1,1,1)
		_MainTexUSpeed("MainTexUSpeed", Float) = 0
		_MainTexVSpeed("MainTexVSpeed", Float) = 0
		[Toggle]_CustomMainTex("CustomMainTex", Float) = 0
		[Toggle(_FMASKTEX_ON)] _FMaskTex("FMaskTex", Float) = 0
		_MaskTex("MaskTex", 2D) = "white" {}
		[Toggle]_MaskTexAR("MaskTexAR", Float) = 1
		_MaskTexUSpeed("MaskTexUSpeed", Float) = 0
		_MaskTexVSpeed("MaskTexVSpeed", Float) = 0
		[Toggle(_FDISTORTTEX_ON)] _FDistortTex("FDistortTex", Float) = 0
		_DistortTex("DistortTex", 2D) = "white" {}
		[Toggle]_DistortTexAR("DistortTexAR", Float) = 1
		_DistortFactor("DistortFactor", Range( 0 , 1)) = 0
		_DistortTexUSpeed("DistortTexUSpeed", Float) = 0
		_DistortTexVSpeed("DistortTexVSpeed", Float) = 0
		[Toggle]_DistortMainTex("DistortMainTex", Float) = 0
		[Toggle]_DistortMaskTex("DistortMaskTex", Float) = 0
		[Toggle]_DistortDissolveTex("DistortDissolveTex", Float) = 0
		[Toggle(_FDISSOLVETEX_ON)] _FDissolveTex("FDissolveTex", Float) = 0
		_DissolveTex("DissolveTex", 2D) = "white" {}
		[Toggle]_DissolveTexAR("DissolveTexAR", Float) = 1
		[HDR]_DissolveColor("DissolveColor", Color) = (1,1,1,1)
		[Toggle]_CustomDissolve("CustomDissolve", Float) = 0
		_DissolveFactor("DissolveFactor", Range( 0 , 1)) = 0
		_DissolveSoft("DissolveSoft", Range( 0 , 1)) = 0.1
		_DissolveWide("DissolveWide", Range( 0 , 1)) = 0.05
		_DissolveTexUSpeed("DissolveTexUSpeed", Float) = 0
		_DissolveTexVSpeed("DissolveTexVSpeed", Float) = 0
		_MainAlpha("MainAlpha", Range( 0 , 10)) = 1
		[Toggle(_FFNL_ON)] _FFnl("FFnl", Float) = 0
		[Toggle(_FDEPTH_ON)] _FDepth("FDepth", Float) = 0
		[HDR]_FnlColor("FnlColor", Color) = (1,1,1,1)
		_FnlScale("FnlScale", Range( 0 , 2)) = 0
		_FnlPower("FnlPower", Range( 1 , 10)) = 1
		[Toggle]_ReFnl("ReFnl", Float) = 0
		[Enum(Alpha,0,Add,1)]_BlendMode("BlendMode", Float) = 0
		_DepthFade("DepthFade", Range( 0 , 10)) = 1
		[HideInInspector] _texcoord2( "", 2D ) = "white" {}
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "Transparent"  "Queue" = "Transparent+0" "IsEmissive" = "true"  }
		Cull [_CullMode]
		ZWrite Off
		ZTest LEqual
		Blend [_Scr] [_Dst]
		
		CGPROGRAM
		#include "UnityShaderVariables.cginc"
		#include "UnityCG.cginc"
		#pragma target 3.0
		#pragma shader_feature_local _FDISSOLVETEX_ON
		#pragma shader_feature_local _FDISTORTTEX_ON
		#pragma shader_feature_local _FFNL_ON
		#pragma shader_feature_local _FMASKTEX_ON
		#pragma shader_feature_local _FDEPTH_ON
		#pragma surface surf Unlit keepalpha noshadow noambient novertexlights nolightmap  nodynlightmap nodirlightmap nofog nometa noforwardadd 
		#undef TRANSFORM_TEX
		#define TRANSFORM_TEX(tex,name) float4(tex.xy * name##_ST.xy + name##_ST.zw, tex.z, tex.w)
		struct Input
		{
			float4 vertexColor : COLOR;
			float2 uv_texcoord;
			float4 uv2_texcoord2;
			float3 worldPos;
			float3 worldNormal;
			float4 screenPos;
		};

		uniform float _Dst;
		uniform float _CullMode;
		uniform float _BlendMode;
		uniform float _Scr;
		uniform float4 _MainColor;
		uniform sampler2D _MainTex;
		uniform float _MainTexUSpeed;
		uniform float _MainTexVSpeed;
		uniform float _CustomMainTex;
		uniform float4 _MainTex_ST;
		uniform float _DistortMainTex;
		uniform float _DistortTexAR;
		uniform sampler2D _DistortTex;
		uniform float _DistortTexUSpeed;
		uniform float _DistortTexVSpeed;
		uniform float4 _DistortTex_ST;
		uniform float _DistortFactor;
		uniform float4 _DissolveColor;
		uniform float _CustomDissolve;
		uniform float _DissolveFactor;
		uniform float _DissolveWide;
		uniform float _DissolveSoft;
		uniform float _DissolveTexAR;
		uniform sampler2D _DissolveTex;
		uniform float _DissolveTexUSpeed;
		uniform float _DissolveTexVSpeed;
		uniform float4 _DissolveTex_ST;
		uniform float _DistortDissolveTex;
		uniform float _MainAlpha;
		uniform float _ReFnl;
		uniform float4 _FnlColor;
		uniform float _FnlScale;
		uniform float _FnlPower;
		uniform float _MainTexAR;
		uniform float _MaskTexAR;
		uniform sampler2D _MaskTex;
		uniform float _MaskTexUSpeed;
		uniform float _MaskTexVSpeed;
		uniform float4 _MaskTex_ST;
		uniform float _DistortMaskTex;
		UNITY_DECLARE_DEPTH_TEXTURE( _CameraDepthTexture );
		uniform float4 _CameraDepthTexture_TexelSize;
		uniform float _DepthFade;

		inline float4 LightingUnlit( SurfaceOutput s, float3 lightDir, float atten )
		{
			return float4 ( 0, 0, 0, s.Alpha );
		}

		void surf( Input i , inout SurfaceOutput o )
		{
			float Scr106 = _Scr;
			float2 appendResult4_g42 = (float2(_MainTexUSpeed , _MainTexVSpeed));
			float2 uv_MainTex = i.uv_texcoord * _MainTex_ST.xy + _MainTex_ST.zw;
			float2 temp_output_3_0_g39 = uv_MainTex;
			float2 appendResult4_g33 = (float2(_DistortTexUSpeed , _DistortTexVSpeed));
			float2 uv_DistortTex = i.uv_texcoord * _DistortTex_ST.xy + _DistortTex_ST.zw;
			float2 panner5_g33 = ( 1.0 * _Time.y * appendResult4_g33 + uv_DistortTex);
			float4 tex2DNode7_g33 = tex2D( _DistortTex, panner5_g33 );
			float Distort148 = ( ( _DistortTexAR == 0.0 ? tex2DNode7_g33.a : tex2DNode7_g33.r ) * _DistortFactor );
			#ifdef _FDISTORTTEX_ON
				float2 staticSwitch316 = ( _DistortMainTex == 0.0 ? temp_output_3_0_g39 : ( temp_output_3_0_g39 + Distort148 ) );
			#else
				float2 staticSwitch316 = uv_MainTex;
			#endif
			float2 appendResult330 = (float2(i.uv2_texcoord2.x , i.uv2_texcoord2.y));
			float2 panner5_g42 = ( 1.0 * _Time.y * appendResult4_g42 + (( _CustomMainTex )?( ( staticSwitch316 + appendResult330 ) ):( staticSwitch316 )));
			float4 tex2DNode7_g42 = tex2D( _MainTex, panner5_g42 );
			float4 MainTexColor215 = ( _MainColor * tex2DNode7_g42 );
			float temp_output_275_0 = (-_DissolveWide + ((( _CustomDissolve )?( i.uv2_texcoord2.z ):( _DissolveFactor )) - 0.0) * (1.0 - -_DissolveWide) / (1.0 - 0.0));
			float temp_output_277_0 = ( _DissolveSoft + 0.0001 );
			float temp_output_272_0 = (-temp_output_277_0 + (( temp_output_275_0 + _DissolveWide ) - 0.0) * (1.0 - -temp_output_277_0) / (1.0 - 0.0));
			float2 appendResult4_g41 = (float2(_DissolveTexUSpeed , _DissolveTexVSpeed));
			float2 uv_DissolveTex = i.uv_texcoord * _DissolveTex_ST.xy + _DissolveTex_ST.zw;
			float2 temp_output_3_0_g40 = uv_DissolveTex;
			#ifdef _FDISTORTTEX_ON
				float2 staticSwitch314 = ( _DistortDissolveTex == 0.0 ? temp_output_3_0_g40 : ( temp_output_3_0_g40 + Distort148 ) );
			#else
				float2 staticSwitch314 = uv_DissolveTex;
			#endif
			float2 panner5_g41 = ( 1.0 * _Time.y * appendResult4_g41 + staticSwitch314);
			float4 tex2DNode7_g41 = tex2D( _DissolveTex, panner5_g41 );
			float temp_output_308_20 = ( _DissolveTexAR == 0.0 ? tex2DNode7_g41.a : tex2DNode7_g41.r );
			float smoothstepResult264 = smoothstep( temp_output_272_0 , ( temp_output_272_0 + temp_output_277_0 ) , temp_output_308_20);
			float Alpha337 = _MainAlpha;
			float4 lerpResult223 = lerp( MainTexColor215 , _DissolveColor , ( _DissolveColor.a * ( 1.0 - smoothstepResult264 ) * Alpha337 ));
			#ifdef _FDISSOLVETEX_ON
				float4 staticSwitch298 = lerpResult223;
			#else
				float4 staticSwitch298 = MainTexColor215;
			#endif
			float4 temp_cast_0 = (0.0).xxxx;
			float Refnl339 = _ReFnl;
			float3 ase_worldPos = i.worldPos;
			float3 ase_worldViewDir = normalize( UnityWorldSpaceViewDir( ase_worldPos ) );
			float3 ase_worldNormal = i.worldNormal;
			float fresnelNdotV279 = dot( ase_worldNormal, ase_worldViewDir );
			float fresnelNode279 = ( 0.0 + _FnlScale * pow( 1.0 - fresnelNdotV279, _FnlPower ) );
			float temp_output_283_0 = saturate( fresnelNode279 );
			float4 FnlMainColor286 = ( _FnlColor * temp_output_283_0 * _FnlColor.a );
			float4 temp_cast_1 = (0.0).xxxx;
			#ifdef _FFNL_ON
				float4 staticSwitch300 = ( Refnl339 == 0.0 ? FnlMainColor286 : temp_cast_1 );
			#else
				float4 staticSwitch300 = temp_cast_0;
			#endif
			float4 MainColor98 = ( i.vertexColor * ( staticSwitch298 + staticSwitch300 ) );
			float MainTexAlpha138 = ( _MainColor.a * ( _MainTexAR == 0.0 ? tex2DNode7_g42.a : tex2DNode7_g42.r ) );
			float2 appendResult4_g44 = (float2(_MaskTexUSpeed , _MaskTexVSpeed));
			float2 uv_MaskTex = i.uv_texcoord * _MaskTex_ST.xy + _MaskTex_ST.zw;
			float2 temp_output_3_0_g43 = uv_MaskTex;
			#ifdef _FDISTORTTEX_ON
				float2 staticSwitch312 = ( _DistortMaskTex == 0.0 ? temp_output_3_0_g43 : ( temp_output_3_0_g43 + Distort148 ) );
			#else
				float2 staticSwitch312 = uv_MaskTex;
			#endif
			float2 panner5_g44 = ( 1.0 * _Time.y * appendResult4_g44 + staticSwitch312);
			float4 tex2DNode7_g44 = tex2D( _MaskTex, panner5_g44 );
			#ifdef _FMASKTEX_ON
				float staticSwitch291 = ( _MaskTexAR == 0.0 ? tex2DNode7_g44.a : tex2DNode7_g44.r );
			#else
				float staticSwitch291 = 1.0;
			#endif
			float temp_output_270_0 = (-temp_output_277_0 + (temp_output_275_0 - 0.0) * (1.0 - -temp_output_277_0) / (1.0 - 0.0));
			float smoothstepResult256 = smoothstep( temp_output_270_0 , ( temp_output_270_0 + temp_output_277_0 ) , temp_output_308_20);
			float DissolveAlpha212 = smoothstepResult256;
			#ifdef _FDISSOLVETEX_ON
				float staticSwitch299 = DissolveAlpha212;
			#else
				float staticSwitch299 = 1.0;
			#endif
			float ReFnlAlpha318 = ( 1.0 - temp_output_283_0 );
			#ifdef _FFNL_ON
				float staticSwitch319 = ( Refnl339 == 0.0 ? 1.0 : ReFnlAlpha318 );
			#else
				float staticSwitch319 = 1.0;
			#endif
			float4 ase_screenPos = float4( i.screenPos.xyz , i.screenPos.w + 0.00000000001 );
			float4 ase_screenPosNorm = ase_screenPos / ase_screenPos.w;
			ase_screenPosNorm.z = ( UNITY_NEAR_CLIP_VALUE >= 0 ) ? ase_screenPosNorm.z : ase_screenPosNorm.z * 0.5 + 0.5;
			float screenDepth348 = LinearEyeDepth(SAMPLE_DEPTH_TEXTURE( _CameraDepthTexture, ase_screenPosNorm.xy ));
			float distanceDepth348 = abs( ( screenDepth348 - LinearEyeDepth( ase_screenPosNorm.z ) ) / ( _DepthFade ) );
			#ifdef _FDEPTH_ON
				float staticSwitch350 = saturate( distanceDepth348 );
			#else
				float staticSwitch350 = 1.0;
			#endif
			float MainAlpha97 = saturate( ( MainTexAlpha138 * staticSwitch291 * i.vertexColor.a * Alpha337 * staticSwitch299 * staticSwitch319 * staticSwitch350 ) );
			o.Emission = ( Scr106 == 5.0 ? MainColor98 : ( MainColor98 * MainAlpha97 ) ).rgb;
			float temp_output_100_0 = MainAlpha97;
			o.Alpha = temp_output_100_0;
		}

		ENDCG
	}
	Fallback "Diffuse"
	CustomEditor "SampleGUI"
}
