using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class TileBingoBoard : ProtoBaseProxy<TileBingoBoard>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_itemInfo_codec;

		public readonly RepeatedField<string> ItemInfo;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_connectSpawner_codec;

		public readonly RepeatedField<int> ConnectSpawner;

		public static readonly FieldCodec<int> _repeated_includeMilestone_codec;

		public readonly RepeatedField<int> IncludeMilestone;

		public static readonly FieldCodec<string> _repeated_specialItem_codec;

		public readonly RepeatedField<string> SpecialItem;

		public int XXX_RowIdentifier { get; set; }

		public TileBingoBoard()
		{
		}

		public TileBingoBoard(TileBingoBoard other)
		{
		}

		public override TileBingoBoard Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
