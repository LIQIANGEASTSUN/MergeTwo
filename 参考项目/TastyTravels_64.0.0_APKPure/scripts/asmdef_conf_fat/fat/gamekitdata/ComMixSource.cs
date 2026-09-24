using Google.Protobuf;
using Google.Protobuf.Collections;

namespace fat.gamekitdata
{
	public sealed class ComMixSource : ProtoBaseProxy<ComMixSource>
	{
		public static readonly string FullName;

		public int ReviveCounter;

		public int OutputCounter;

		public int ItemInRecharge;

		public int ItemCount;

		public int OutputCount;

		public bool IsFirstRevive;

		public static readonly FieldCodec<int> _repeated_mixedItems_codec;

		public readonly RepeatedField<int> MixedItems;

		public ComMixSource()
		{
		}

		public ComMixSource(ComMixSource other)
		{
		}

		public override ComMixSource Clone()
		{
			return null;
		}

		public override void InternalWriteTo(ref WriteContext output)
		{
		}

		public override int ProxyCalculateSize()
		{
			return 0;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
