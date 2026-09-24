using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComTapBonus : ProtoBaseProxy<ComTapBonus>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Count;

		public FuncType FuncType;

		public int ItemId;

		public int XXX_RowIdentifier { get; set; }

		public ComTapBonus()
		{
		}

		public ComTapBonus(ComTapBonus other)
		{
		}

		public override ComTapBonus Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
