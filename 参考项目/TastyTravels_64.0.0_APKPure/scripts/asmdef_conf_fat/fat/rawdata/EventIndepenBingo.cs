using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventIndepenBingo : ProtoBaseProxy<EventIndepenBingo>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BingoTheme;

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

		public int XXX_RowIdentifier { get; set; }

		public EventIndepenBingo()
		{
		}

		public EventIndepenBingo(EventIndepenBingo other)
		{
		}

		public override EventIndepenBingo Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
