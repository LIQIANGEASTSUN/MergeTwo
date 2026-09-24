/* Ghidra 12.1.2 native pseudocode; RVA 0x3D40BB4; Merger.Services.Backend.WebSocket.OperationTrackingSystem.TrackMergeOperation<object>; status ok */

undefined8
Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackMergeOperation_object_
          (long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  lVar6 = param_3;
  lVar4 = param_4;
  if (*(long *)(param_4 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_077507d0);
    func_0x03280a18(PTR_DAT_0775a958);
    func_0x03280a18(PTR_DAT_07750838);
    func_0x03280a18(PTR_DAT_0777ab28);
    func_0x03280a18(PTR_DAT_07779e90);
    if (*(long *)(param_4 + 0x38) == 0) {
      func_0x03256878(param_4);
    }
  }
  plVar9 = *(long **)(param_1 + 0x40);
  lVar1 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
  func_0x04fe1fa4(lVar1,*(undefined8 *)PTR_DAT_0775a958);
  if (lVar1 != 0) {
    lVar4 = *(long *)PTR_DAT_077507d0;
    func_0x04fe2d7c(lVar1,*(undefined8 *)PTR_DAT_07779e90);
    lVar6 = param_3;
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      uVar10 = *(undefined8 *)PTR_DAT_0777ab28;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
            lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 + 0x138;
            goto LAB_03e40cdc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar6 = func_0x03256b10(plVar9);
LAB_03e40cdc:
      lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,param_2,lVar1,lVar6);
      return uVar10;
    }
  }
  auVar11 = func_0x03280cac();
  lVar1 = lVar6;
  if (*(long *)(lVar6 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0777ab30);
    if (*(long *)(lVar6 + 0x38) == 0) {
      func_0x03256878(lVar6);
    }
  }
  plVar9 = *(long **)(auVar11._0_8_ + 0x40);
  if (plVar9 == (long *)0x0) {
    auVar11 = func_0x03280cac();
    lVar6 = lVar1;
    lVar5 = lVar4;
    if (*(long *)(lVar4 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_077507d0);
      func_0x03280a18(PTR_DAT_0775a958);
      func_0x03280a18(PTR_DAT_07750838);
      func_0x03280a18(PTR_DAT_07779e90);
      func_0x03280a18(PTR_DAT_0777ab38);
      if (*(long *)(lVar4 + 0x38) == 0) {
        func_0x03256878(lVar4);
      }
    }
    plVar9 = *(long **)(auVar11._0_8_ + 0x40);
    lVar2 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
    func_0x04fe1fa4(lVar2,*(undefined8 *)PTR_DAT_0775a958);
    if (lVar2 != 0) {
      lVar5 = *(long *)PTR_DAT_077507d0;
      func_0x04fe2d7c(lVar2,*(undefined8 *)PTR_DAT_07779e90,lVar1,lVar5);
      lVar6 = lVar1;
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 8);
        uVar10 = *(undefined8 *)PTR_DAT_0777ab38;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
              lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 + 0x138;
              goto LAB_03e40f1c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        lVar6 = func_0x03256b10(plVar9);
LAB_03e40f1c:
        lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar11._8_8_,lVar2,lVar6);
        return uVar10;
      }
    }
    auVar11 = func_0x03280cac();
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
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x38) + 0x10))
                       (auVar11._8_8_,lVar6,**(undefined8 **)(lVar4 + 0xb8));
    uVar3 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
    func_0x05a85e88(uVar3,auVar11._0_8_,lVar5,param_5 & 0xffffffff,uVar10,0);
    return uVar3;
  }
  lVar4 = *plVar9;
  lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
  uVar10 = *(undefined8 *)PTR_DAT_0777ab30;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar4 = lVar4 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40dbc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar4 = func_0x03256b10(plVar9);
LAB_03e40dbc:
  lVar6 = func_0x03280b88(*(undefined8 *)(lVar4 + 8),lVar6);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,auVar11._8_8_,0,lVar6);
  return uVar10;
}

