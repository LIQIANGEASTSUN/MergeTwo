using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeBoard : ProtoBaseProxy<MergeBoard>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string AmbientAudio;

		public string BackGroundBG;

		public string BoxUnlockEffect;

		public static readonly FieldCodec<string> _repeated_col_codec;

		public readonly RepeatedField<string> Col;

		public int ColCount;

		public int DetailParam;

		public bool EqualMainBoard;

		public FeatureEntry Feature;

		public bool GiftBoxunable;

		public string ImgBG;

		public static readonly FieldCodec<string> _repeated_imgBox_codec;

		public readonly RepeatedField<string> ImgBox;

		public string ImgTile;

		public string ImgTop;

		public bool IsBoxEdge;

		public int IslandId;

		public static readonly FieldCodec<int> _repeated_lvAreaId_codec;

		public readonly RepeatedField<int> LvAreaId;

		public string OverallCoverImg;

		public int RowCount;

		public int ShowOrder;

		public int WallPaperId;

		public int XXX_RowIdentifier { get; set; }

		public MergeBoard()
		{
		}

		public MergeBoard(MergeBoard other)
		{
		}

		public override MergeBoard Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
