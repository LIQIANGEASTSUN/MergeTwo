using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventTrainMissionRound : ProtoBaseProxy<EventTrainMissionRound>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_includeTrainId_codec;

		public readonly RepeatedField<int> IncludeTrainId;

		public int XXX_RowIdentifier { get; set; }

		public EventTrainMissionRound()
		{
		}

		public EventTrainMissionRound(EventTrainMissionRound other)
		{
		}

		public override EventTrainMissionRound Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
