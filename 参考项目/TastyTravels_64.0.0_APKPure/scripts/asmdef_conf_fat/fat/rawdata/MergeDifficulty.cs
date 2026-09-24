using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeDifficulty : ProtoBaseProxy<MergeDifficulty>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_actualDifficulty_codec;

		public readonly RepeatedField<string> ActualDifficulty;

		public int AverageDifficulty;

		public int ProducerCategoryId;

		public int XXX_RowIdentifier { get; set; }

		public MergeDifficulty()
		{
		}

		public MergeDifficulty(MergeDifficulty other)
		{
		}

		public override MergeDifficulty Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
