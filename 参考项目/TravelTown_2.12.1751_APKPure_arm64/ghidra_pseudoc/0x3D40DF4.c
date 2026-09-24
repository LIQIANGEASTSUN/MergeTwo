/* Ghidra 12.1.2 native pseudocode; RVA 0x3D40DF4; Merger.Services.Backend.WebSocket.OperationTrackingSystem.TrackStackingOperation<object>; status ok */


undefined8
Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackStackingOperation_object_
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
          long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  uVar7 = param_3;
  lVar3 = param_4;
  if (*(long *)(param_4 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_077507d0);
    func_0x03280a18(PTR_DAT_0775a958);
    func_0x03280a18(PTR_DAT_07750838);
    func_0x03280a18(PTR_DAT_07779e90);
    func_0x03280a18(PTR_DAT_0777ab38);
    if (*(long *)(param_4 + 0x38) == 0) {
      func_0x03256878(param_4);
    }
  }
  plVar6 = *(long **)(param_1 + 0x40);
  lVar1 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
  func_0x04fe1fa4(lVar1,*(undefined8 *)PTR_DAT_0775a958);
  if (lVar1 != 0) {
    lVar3 = *(long *)PTR_DAT_077507d0;
    func_0x04fe2d7c(lVar1,*(undefined8 *)PTR_DAT_07779e90,param_3,lVar3);
    uVar7 = param_3;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      uVar7 = *(undefined8 *)PTR_DAT_0777ab38;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_03e40f1c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar3 = func_0x03256b10(plVar6);
LAB_03e40f1c:
      lVar3 = func_0x03280b88(*(undefined8 *)(lVar3 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(lVar3 + 8))(plVar6,uVar7,param_2,lVar1,lVar3);
      return uVar7;
    }
  }
  auVar9 = func_0x03280cac();
  if (*(long *)(param_6 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0777ab40);
    func_0x03280a18(PTR_DAT_0777ab48);
    if (*(long *)(param_6 + 0x38) == 0) {
      func_0x03256878(param_6);
    }
  }
  lVar8 = *(long *)PTR_DAT_0777ab40;
  lVar1 = *(long *)(lVar8 + 0x38);
  if (lVar1 == 0) {
    func_0x03256878(lVar8);
    lVar1 = *(long *)(lVar8 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = func_0x0325681c();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar1 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = func_0x0325681c();
  }
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x38) + 0x10))
                    (auVar9._8_8_,uVar7,**(undefined8 **)(lVar1 + 0xb8));
  uVar2 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
  func_0x05a85e88(uVar2,auVar9._0_8_,lVar3,param_5 & 0xffffffff,uVar7,0);
  return uVar2;
}

