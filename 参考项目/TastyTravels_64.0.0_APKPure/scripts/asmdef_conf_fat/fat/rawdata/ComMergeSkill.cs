using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeSkill : ProtoBaseProxy<ComMergeSkill>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_desc2_codec;

		public readonly RepeatedField<string> Desc2;

		public string InfoTutorialRes;

		public static readonly FieldCodec<int> _repeated_param2_codec;

		public readonly RepeatedField<int> Param2;

		public static readonly FieldCodec<int> _repeated_param3_codec;

		public readonly RepeatedField<int> Param3;

		public static readonly FieldCodec<int> _repeated_params_codec;

		public readonly RepeatedField<int> Params;

		public SkillType Type;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeSkill()
		{
		}

		public ComMergeSkill(ComMergeSkill other)
		{
		}

		public override ComMergeSkill Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
