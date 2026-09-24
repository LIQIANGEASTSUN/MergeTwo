using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class GuideMerge : ProtoBaseProxy<GuideMerge>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_actions_codec;

		public readonly RepeatedField<int> Actions;

		public static readonly FieldCodec<int> _repeated_preSteps_codec;

		public readonly RepeatedField<int> PreSteps;

		public int Priority;

		public int Skip;

		public int XXX_RowIdentifier { get; set; }

		public GuideMerge()
		{
		}

		public GuideMerge(GuideMerge other)
		{
		}

		public override GuideMerge Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
