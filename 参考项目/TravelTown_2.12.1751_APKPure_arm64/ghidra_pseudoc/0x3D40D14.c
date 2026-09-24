/* Ghidra 12.1.2 native pseudocode; RVA 0x3D40D14; Merger.Services.Backend.WebSocket.OperationTrackingSystem.TrackMoveOperation<object>; status ok */


undefined8
Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackMoveOperation_object_
          (long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar4 = param_3;
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0777ab30);
    if (*(long *)(param_3 + 0x38) == 0) {
      func_0x03256878(param_3);
    }
  }
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 == (long *)0x0) {
    auVar10 = func_0x03280cac();
    lVar9 = lVar4;
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
    plVar7 = *(long **)(auVar10._0_8_ + 0x40);
    lVar1 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
    func_0x04fe1fa4(lVar1,*(undefined8 *)PTR_DAT_0775a958);
    if (lVar1 != 0) {
      lVar3 = *(long *)PTR_DAT_077507d0;
      func_0x04fe2d7c(lVar1,*(undefined8 *)PTR_DAT_07779e90,lVar4,lVar3);
      lVar9 = lVar4;
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        lVar9 = *(long *)(*(long *)(param_4 + 0x38) + 8);
        uVar8 = *(undefined8 *)PTR_DAT_0777ab38;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
              lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
              goto LAB_03e40f1c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar4 = func_0x03256b10(plVar7);
LAB_03e40f1c:
        lVar4 = func_0x03280b88(*(undefined8 *)(lVar4 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (**(code **)(lVar4 + 8))(plVar7,uVar8,auVar10._8_8_,lVar1,lVar4);
        return uVar8;
      }
    }
    auVar10 = func_0x03280cac();
    if (*(long *)(param_6 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_0777ab40);
      func_0x03280a18(PTR_DAT_0777ab48);
      if (*(long *)(param_6 + 0x38) == 0) {
        func_0x03256878(param_6);
      }
    }
    lVar1 = *(long *)PTR_DAT_0777ab40;
    lVar4 = *(long *)(lVar1 + 0x38);
    if (lVar4 == 0) {
      func_0x03256878(lVar1);
      lVar4 = *(long *)(lVar1 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = func_0x0325681c();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar4 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = func_0x0325681c();
    }
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x38) + 0x10))
                      (auVar10._8_8_,lVar9,**(undefined8 **)(lVar4 + 0xb8));
    uVar2 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
    func_0x05a85e88(uVar2,auVar10._0_8_,lVar3,param_5 & 0xffffffff,uVar8,0);
    return uVar2;
  }
  lVar4 = *plVar7;
  lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  uVar8 = *(undefined8 *)PTR_DAT_0777ab30;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40dbc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar4 = func_0x03256b10(plVar7);
LAB_03e40dbc:
  lVar4 = func_0x03280b88(*(undefined8 *)(lVar4 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(lVar4 + 8))(plVar7,uVar8,param_2,0,lVar4);
  return uVar8;
}

