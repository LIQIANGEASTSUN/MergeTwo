/* Ghidra 12.1.2 native pseudocode; RVA 0x4552B90; Merger.Services.Backend.Sync.SyncPayloadServiceBase<TPayload>.GetResourceValue; status ok */


ulong Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___GetResourceValue
                (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long extraout_x1;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_077730b8;
  if ((bRam0000000007e1918d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f1f8);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e1918d = 1;
  }
  plVar7 = *(long **)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar2 = func_0x0624cb20(param_2,0);
  puVar1 = PTR_DAT_0776f1f8;
  if (plVar7 == (long *)0x0) {
    uVar5 = func_0x03280cac();
    return uVar5;
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07773688) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_04652c6c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07773688,1);
LAB_04652c6c:
  lVar4 = (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
  if (lVar4 != 0) {
    if ((*(byte *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    return (ulong)*(uint *)(lVar4 + 0x20);
  }
  func_0x03280cac();
  uVar5 = func_0x05793b4c(&stack0xffffffffffffffec,
                          *(undefined8 *)(*(long *)(*(long *)(extraout_x1 + 0x20) + 0xc0) + 0x40));
  return uVar5;
}

