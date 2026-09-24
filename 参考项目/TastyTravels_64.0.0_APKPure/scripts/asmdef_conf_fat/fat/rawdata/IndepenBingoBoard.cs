using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class IndepenBingoBoard : ProtoBaseProxy<IndepenBingoBoard>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_itemInfo_codec;

		public readonly RepeatedField<string> ItemInfo;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardColNum;

		public int BoardRowNum;

		public static readonly FieldCodec<int> _repeated_connectSpawner_codec;

		public readonly RepeatedField<int> ConnectSpawner;

		public static readonly FieldCodec<string> _repeated_rewardAll_codec;

		public readonly RepeatedField<string> RewardAll;

		public static readonly FieldCodec<string> _repeated_rewardSlash_codec;

		public readonly RepeatedField<string> RewardSlash;

		public static readonly FieldCodec<string> _repeated_rewardStraight_codec;

		public readonly RepeatedField<string> RewardStraight;

		public int XXX_RowIdentifier { get; set; }

		public IndepenBingoBoard()
		{
		}

		public IndepenBingoBoard(IndepenBingoBoard other)
		{
		}

		public override IndepenBingoBoard Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
