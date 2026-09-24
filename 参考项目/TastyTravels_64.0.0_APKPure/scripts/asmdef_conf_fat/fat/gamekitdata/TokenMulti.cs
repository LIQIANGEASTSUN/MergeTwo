using Google.Protobuf;

namespace fat.gamekitdata
{
	public sealed class TokenMulti : ProtoBaseProxy<TokenMulti>
	{
		public static readonly string FullName;

		public int TokenMultiItemId;

		public int LifeCounter;

		public TokenMulti()
		{
		}

		public TokenMulti(TokenMulti other)
		{
		}

		public override TokenMulti Clone()
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
