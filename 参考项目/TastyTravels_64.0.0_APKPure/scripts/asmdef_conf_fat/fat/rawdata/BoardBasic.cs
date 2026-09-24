using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class BoardBasic : ProtoBaseProxy<BoardBasic>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string BackGroundBG;

		public static readonly FieldCodec<int> _repeated_boardId_codec;

		public readonly RepeatedField<int> BoardId;

		public string ImgBG;

		public static readonly FieldCodec<string> _repeated_imgBox_codec;

		public readonly RepeatedField<string> ImgBox;

		public string ImgTile;

		public string ImgTop;

		public string OverallCoverImg;

		public int WallPaperId;

		public int XXX_RowIdentifier { get; set; }

		public BoardBasic()
		{
		}

		public BoardBasic(BoardBasic other)
		{
		}

		public override BoardBasic Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
