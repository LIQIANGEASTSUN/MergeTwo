using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventIndepenBingoRound : ProtoBaseProxy<EventIndepenBingoRound>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_includeItemBingoId_codec;

		public readonly RepeatedField<int> IncludeItemBingoId;

		public int XXX_RowIdentifier { get; set; }

		public EventIndepenBingoRound()
		{
		}

		public EventIndepenBingoRound(EventIndepenBingoRound other)
		{
		}

		public override EventIndepenBingoRound Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
