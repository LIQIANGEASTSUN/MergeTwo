using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFarmItemDrop : ProtoBaseProxy<EventFarmItemDrop>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_animalOutput_codec;

		public readonly RepeatedField<string> AnimalOutput;

		public int AnimalOutputTimes;

		public static readonly FieldCodec<string> _repeated_areaOutput_codec;

		public readonly RepeatedField<string> AreaOutput;

		public int AreaOutputTimes;

		public int EatItemId;

		public int XXX_RowIdentifier { get; set; }

		public EventFarmItemDrop()
		{
		}

		public EventFarmItemDrop(EventFarmItemDrop other)
		{
		}

		public override EventFarmItemDrop Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
