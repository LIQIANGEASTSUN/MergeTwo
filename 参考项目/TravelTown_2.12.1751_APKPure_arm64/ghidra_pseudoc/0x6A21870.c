/* Ghidra 12.1.2 native pseudocode; RVA 0x6A21870; MergeEngine.Configuration.Definitions.ResourceMultiple..ctor; status ok */


void MergeEngine_Configuration_Definitions_ResourceMultiple___ctor
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar4 = PTR_DAT_077730b8;
  if ((bRam0000000007e2a431 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773188);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e2a431 = 1;
  }
  puVar5 = PTR_DAT_07773188;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar6 = func_0x0624cb20(param_2,0);
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x0611fc6c(uVar7,param_3,0);
  func_0x0611f2d4(param_1,uVar6,uVar7,0,0);
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  uVar6 = func_0x0624cb20(param_2,0);
  puVar8 = (undefined8 *)(param_1 + 0x60);
  *puVar8 = uVar6;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

