using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMagicOrder : ProtoBaseProxy<EventMagicOrder>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int ExtraReward;

		public bool IsGuide;

		public int OrderTheme;

		public int RandomerId;

		public string Tips;

		public int XXX_RowIdentifier { get; set; }

		public EventMagicOrder()
		{
		}

		public EventMagicOrder(EventMagicOrder other)
		{
		}

		public override EventMagicOrder Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
