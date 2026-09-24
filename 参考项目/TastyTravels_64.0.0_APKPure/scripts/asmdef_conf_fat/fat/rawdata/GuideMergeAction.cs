using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class GuideMergeAction : ProtoBaseProxy<GuideMergeAction>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string Act;

		public bool AllowSkip;

		public static readonly FieldCodec<string> _repeated_param_codec;

		public readonly RepeatedField<string> Param;

		public static readonly FieldCodec<string> _repeated_requires_codec;

		public readonly RepeatedField<string> Requires;

		public static readonly FieldCodec<string> _repeated_triggers_codec;

		public readonly RepeatedField<string> Triggers;

		public int XXX_RowIdentifier { get; set; }

		public GuideMergeAction()
		{
		}

		public GuideMergeAction(GuideMergeAction other)
		{
		}

		public override GuideMergeAction Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
