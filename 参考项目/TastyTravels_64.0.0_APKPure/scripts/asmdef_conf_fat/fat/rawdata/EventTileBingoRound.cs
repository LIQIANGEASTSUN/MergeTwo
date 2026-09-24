using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventTileBingoRound : ProtoBaseProxy<EventTileBingoRound>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_includeTileBingoId_codec;

		public readonly RepeatedField<int> IncludeTileBingoId;

		public int XXX_RowIdentifier { get; set; }

		public EventTileBingoRound()
		{
		}

		public EventTileBingoRound(EventTileBingoRound other)
		{
		}

		public override EventTileBingoRound Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
