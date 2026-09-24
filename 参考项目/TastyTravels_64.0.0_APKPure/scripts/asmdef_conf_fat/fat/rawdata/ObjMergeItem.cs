using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ObjMergeItem : ProtoBaseProxy<ObjMergeItem>, IRowIdentifier<string>
	{
		public static readonly string FullName;

		public int ConfigVersion;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BingoPrice;

		public int BoardId;

		public bool BubbleAd;

		public int BubbleDiscount;

		public int BubblePrice;

		public int BubbleProb;

		public float BubbleProbAdjust;

		public string Desc;

		public string DisplayRes;

		public bool IsDegradable;

		public bool IsFrozenItem;

		public bool IsHideProd;

		public bool IsImportant;

		public bool IsJokerable;

		public bool IsNondrag;

		public bool IsPowerUp;

		public bool IsRecycle;

		public bool IsSellForCoin;

		public bool IsTop;

		public bool IsTopEffect;

		public static readonly FieldCodec<int> _repeated_mergeBonus_codec;

		public readonly RepeatedField<int> MergeBonus;

		public static readonly FieldCodec<int> _repeated_mergeGrid_codec;

		public readonly RepeatedField<int> MergeGrid;

		public int MergeScore;

		public int Point;

		public int ReplaceId;

		public string Reward;

		public string SelectSnd;

		public int SellNum;

		public int SellPlayerLv;

		public int SellPrice;

		public int UnlockPrice;

		public string XXX_RowIdentifier { get; set; }

		public ObjMergeItem()
		{
		}

		public ObjMergeItem(ObjMergeItem other)
		{
		}

		public override ObjMergeItem Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
