using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventFarmBoardAnimal : ProtoBaseProxy<EventFarmBoardAnimal>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int ItemId;

		public static readonly FieldCodec<int> _repeated_output_codec;

		public readonly RepeatedField<int> Output;

		public int XXX_RowIdentifier { get; set; }

		public EventFarmBoardAnimal()
		{
		}

		public EventFarmBoardAnimal(EventFarmBoardAnimal other)
		{
		}

		public override EventFarmBoardAnimal Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
