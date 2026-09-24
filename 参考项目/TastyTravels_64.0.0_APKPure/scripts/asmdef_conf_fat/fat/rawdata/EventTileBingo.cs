using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventTileBingo : ProtoBaseProxy<EventTileBingo>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BagSubmitTheme;

		public int BagTheme;

		public int BoardId;

		public static readonly FieldCodec<string> _repeated_endRecycle_codec;

		public readonly RepeatedField<string> EndRecycle;

		public int EndTheme;

		public int FreeItem;

		public int GradeId;

		public int GroupChooseTheme;

		public int HelpTheme;

		public bool IsOnBonus;

		public bool IsOnBubble;

		public int ItemTheme;

		public int LevelComplete;

		public int LoadingTheme;

		public int MainTheme;

		public string Name;

		public int NewRoundTheme;

		public int SpawnerPreviewTheme;

		public int StartTheme;

		public int Storage;

		public int TileTheme;

		public int TipsTheme;

		public int XXX_RowIdentifier { get; set; }

		public EventTileBingo()
		{
		}

		public EventTileBingo(EventTileBingo other)
		{
		}

		public override EventTileBingo Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
