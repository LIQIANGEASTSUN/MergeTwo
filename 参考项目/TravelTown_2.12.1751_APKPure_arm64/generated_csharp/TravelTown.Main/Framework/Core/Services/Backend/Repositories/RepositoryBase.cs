using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Config;
using Framework.Core.Services.Backend.Data;
using Framework.Core.Services.Backend.Http.Data;
using Framework.Core.Services.Backend.Http.Enums;
using Framework.Core.Services.Backend.Http.Interfaces;
using Framework.Core.Services.Backend.Http.Interfaces.Headers;
using Framework.Core.Services.Backend.Http.Interfaces.Validations;
using Merger.Bootstrap.RemoteBootstrapService;
using Merger.Services.Backend.WebSocket.WebsocketRequests;
using Zenject;
using strange.extensions.promise.api;

namespace Framework.Core.Services.Backend.Repositories
{
	public abstract class RepositoryBase : IInitializable
	{
		[Inject]
		[NonSerialized]
		public DiContainer DiContainer;

		[Inject]
		[NonSerialized]
		public IHttpRequestService _httpRequestService;

		[Inject]
		[NonSerialized]
		public IWebsocketRequestService _websocketRequestService;

		[Inject]
		[NonSerialized]
		public IHttpRequestFactory _requestFactory;

		[Inject]
		[NonSerialized]
		public IBackendCredentialsModel _backendCredentialsModel;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IHeaderBuilder _headerBuilder;

		[Inject]
		[NonSerialized]
		public SignalBus _signalBus;

		[Inject]
		[NonSerialized]
		public IClientConfigService _clientConfigService;

		[Inject]
		[NonSerialized]
		public IBootstrapPreDownloadService _iIBootstrapPreDownloadService;

		public virtual string UserId => null;

		public IHttpRequestService HttpRequestService => null;

		public IJsonService JsonService => null;

		public SignalBus SignalBus => null;

		public virtual IHttpRequestFactory RequestFactory => null;

		public virtual bool ForceDeserializationOnMainThread => false;

		void IInitializable.Initialize()
		{
		}

		public virtual void InitializeRepository()
		{
		}

		public IPromise<HttpResponse> MakePostRequest<TPayload>(string path, TPayload payload, bool userAuthorizationHeader = true, string version = "v1", Dictionary<string, string> additionalHeaders = null, RetryStrategy retryStrategy = null, ISuccessStrategy successStrategy = null, bool useUnityWebRequest = false)
		{
			return null;
		}

		public IPromise<HttpResponse> MakePatchRequest<TPayload>(string path, TPayload payload, bool userAuthorizationHeader = true, string version = "v1", Dictionary<string, string> additionalHeaders = null, RetryStrategy retryStrategy = null, ISuccessStrategy successStrategy = null, IHttpErrorHandler httpErrorHandler = null)
		{
			return null;
		}

		public IPromise<HttpResponse> MakeDeleteRequest<TPayload>(string path, TPayload payload, bool userAuthorizationHeader = true, string version = "v1", Dictionary<string, string> additionalHeaders = null, bool disableCache = false, RetryStrategy retryStrategy = null)
		{
			return null;
		}

		public IPromise<HttpResponse> MakeGetRequest(string path, bool userAuthorizationHeader = true, string version = "v1", Dictionary<string, string> additionalHeaders = null, bool disableCache = false, RetryStrategy retryStrategy = null)
		{
			return null;
		}

		public HttpRequest CreateGetRequest(string path, bool userAuthorizationHeader = true, string version = "v1", Dictionary<string, string> additionalHeaders = null, bool disableCache = false, RetryStrategy retryStrategy = null)
		{
			return null;
		}

		public IPromise<HttpResponse> MakePutRequest<TPayload>(string path, TPayload payload, bool userAuthorizationHeader = true, string version = "v1", Dictionary<string, string> additionalHeaders = null, RetryStrategy retryStrategy = null)
		{
			return null;
		}

		public void ConvertToObject<T>(HttpResponse response, IPromise<T> promise, IResponseValidator<T> validator = null, bool reportParsingMetric = false)
		{
		}

		public void ConvertToObject<T>(BackendMessageNotification messageNotification, IPromise<T> promise, IResponseValidator<T> validator = null, bool reportParsingMetric = false)
		{
		}

		public T ConvertToObject<T>(HttpResponse response, IResponseValidator<T> validator = null)
		{
			return default(T);
		}

		public void ConvertToObjectInternal<T>(string data, IPromise<T> promise, string requestUniqueId, bool reportParsingMetric, IResponseValidator<T> validator = null, string customLogData = null)
		{
		}

		public IPromise<HttpResponse> MakeRequest<TPayload>(string path, TPayload payload, bool userAuthorizationHeader, HttpRequestType requestType, Dictionary<string, string> additionalHeaders, string version, RetryStrategy retryStrategy, ISuccessStrategy successStrategy = null, bool useUnityWebRequest = false, IHttpErrorHandler httpErrorHandler = null)
		{
			return null;
		}

		public HttpRequest CreateRequest<TPayload>(string path, TPayload payload, bool userAuthorizationHeader, HttpRequestType requestType, Dictionary<string, string> additionalHeaders, string version, RetryStrategy retryStrategy, ISuccessStrategy successStrategy = null, bool useUnityWebRequest = false, IHttpErrorHandler httpErrorHandler = null)
		{
			return null;
		}

		public void TryAddRetryStrategy(RequestData requestData, RetryStrategy retryStrategy)
		{
		}

		public IPromise<T> MakeWebsocketRequest<T>(string topic, string action, object payload = null, int timeout = 30, int retryCount = 0, IResponseValidator<T> validator = null)
		{
			return null;
		}

		public IPromise<TResponse> WebsocketRequest<TPayload, TResponse>(string topic, string action, TPayload payload, int timeout = 30, int retryCount = 0, IResponseValidator<TResponse> validator = null)
		{
			return null;
		}

		public IPromise<TResponse> WebsocketRequest<TResponse>(string topic, string action, int timeout = 30, int retryCount = 0)
		{
			return null;
		}

		public void MakeWebsocketRequestWithoutReply(string topic, string action, object payload = null, int timeout = 30, int retryCount = 0)
		{
		}

		public IPromise<TResponse> Post<TRequest, TResponse>(string path, TRequest payload, IResponseValidator<TResponse> validator = null)
		{
			return null;
		}

		public IPromise Delete<TRequest>(string path, TRequest payload)
		{
			return null;
		}

		public IPromise<TResponse> Get<TResponse>(string path, IResponseValidator<TResponse> validator = null, Dictionary<string, string> additionalHeaders = null, bool reportParsingMetric = false)
		{
			return null;
		}

		public IPromise<TResponse> Patch<TRequest, TResponse>(string path, TRequest payload, IResponseValidator<TResponse> validator = null)
		{
			return null;
		}

		public IPromise<TResponse> Put<TRequest, TResponse>(string path, TRequest payload, IResponseValidator<TResponse> validator = null)
		{
			return null;
		}

		public IPromise Put<TRequest>(string path, TRequest payload)
		{
			return null;
		}

		public TValidator InstantiateValidator<TValidator, TResponse>() where TValidator : IResponseValidator<TResponse>
		{
			return default(TValidator);
		}

		public RepositoryBase()
		{
		}
	}
}
