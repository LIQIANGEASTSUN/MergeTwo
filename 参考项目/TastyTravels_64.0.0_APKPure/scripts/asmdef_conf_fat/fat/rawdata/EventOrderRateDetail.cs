using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventOrderRateDetail : ProtoBaseProxy<EventOrderRateDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_levelScore_codec;

		public readonly RepeatedField<string> LevelScore;

		public static readonly FieldCodec<int> _repeated_randomId_codec;

		public readonly RepeatedField<int> RandomId;

		public int XXX_RowIdentifier { get; set; }

		public EventOrderRateDetail()
		{
		}

		public EventOrderRateDetail(EventOrderRateDetail other)
		{
		}

		public override EventOrderRateDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
