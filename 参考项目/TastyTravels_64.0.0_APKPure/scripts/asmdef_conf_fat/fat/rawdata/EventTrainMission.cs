using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventTrainMission : ProtoBaseProxy<EventTrainMission>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Board;

		public int BoardId;

		public int ChooseTheme;

		public static readonly FieldCodec<string> _repeated_endRecycle_codec;

		public readonly RepeatedField<string> EndRecycle;

		public int EndTheme;

		public int FreeItem;

		public int GradeId;

		public int HelpTheme;

		public bool IsOnBonus;

		public bool IsOnBubble;

		public int ItemTheme;

		public int LoadingTheme;

		public int MainTheme;

		public string Name;

		public int NewRoundTheme;

		public int PreviewTheme;

		public int StartTheme;

		public int Storage;

		public int XXX_RowIdentifier { get; set; }

		public EventTrainMission()
		{
		}

		public EventTrainMission(EventTrainMission other)
		{
		}

		public override EventTrainMission Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
