using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeRule : ProtoBaseProxy<MergeRule>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int TargetId;

		public int XXX_RowIdentifier { get; set; }

		public MergeRule()
		{
		}

		public MergeRule(MergeRule other)
		{
		}

		public override MergeRule Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
