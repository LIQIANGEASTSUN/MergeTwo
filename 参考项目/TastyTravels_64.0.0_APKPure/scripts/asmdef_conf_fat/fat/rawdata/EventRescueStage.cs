using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventRescueStage : ProtoBaseProxy<EventRescueStage>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int CostItemId;

		public static readonly FieldCodec<int> _repeated_dropId_codec;

		public readonly RepeatedField<int> DropId;

		public int JumpItem;

		public int KeyId;

		public static readonly FieldCodec<int> _repeated_mileStoneStreak_codec;

		public readonly RepeatedField<int> MileStoneStreak;

		public int OrderLowerRightScore;

		public static readonly FieldCodec<int> _repeated_targetAreaId_codec;

		public readonly RepeatedField<int> TargetAreaId;

		public int XXX_RowIdentifier { get; set; }

		public EventRescueStage()
		{
		}

		public EventRescueStage(EventRescueStage other)
		{
		}

		public override EventRescueStage Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
