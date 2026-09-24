/* Ghidra 12.1.2 native pseudocode; RVA 0x3D40AD4; Merger.Services.Backend.WebSocket.OperationTrackingSystem.TrackItemRestoredFromProducerInventoryOperation<object>; status ok */


undefined8
Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackItemRestoredFromProducerInventoryOperation_object_
          (long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar5 = param_3;
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0777ab20);
    if (*(long *)(param_3 + 0x38) == 0) {
      func_0x03256878(param_3);
    }
  }
  plVar8 = *(long **)(param_1 + 0x40);
  if (plVar8 == (long *)0x0) {
    auVar11 = func_0x03280cac();
    lVar10 = lVar5;
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
    plVar8 = *(long **)(auVar11._0_8_ + 0x40);
    lVar1 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
    func_0x04fe1fa4(lVar1,*(undefined8 *)PTR_DAT_0775a958);
    if (lVar1 != 0) {
      lVar4 = *(long *)PTR_DAT_077507d0;
      func_0x04fe2d7c(lVar1,*(undefined8 *)PTR_DAT_07779e90);
      lVar10 = lVar5;
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 8);
        uVar9 = *(undefined8 *)PTR_DAT_0777ab28;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
              lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138
              ;
              goto LAB_03e40cdc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        lVar5 = func_0x03256b10(plVar8);
LAB_03e40cdc:
        lVar5 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)(lVar5 + 8))(plVar8,uVar9,auVar11._8_8_,lVar1,lVar5);
        return uVar9;
      }
    }
    auVar11 = func_0x03280cac();
    lVar5 = lVar10;
    if (*(long *)(lVar10 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_0777ab30);
      if (*(long *)(lVar10 + 0x38) == 0) {
        func_0x03256878(lVar10);
      }
    }
    plVar8 = *(long **)(auVar11._0_8_ + 0x40);
    if (plVar8 == (long *)0x0) {
      auVar11 = func_0x03280cac();
      lVar10 = lVar5;
      lVar1 = lVar4;
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
      plVar8 = *(long **)(auVar11._0_8_ + 0x40);
      lVar2 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
      func_0x04fe1fa4(lVar2,*(undefined8 *)PTR_DAT_0775a958);
      if (lVar2 != 0) {
        lVar1 = *(long *)PTR_DAT_077507d0;
        func_0x04fe2d7c(lVar2,*(undefined8 *)PTR_DAT_07779e90,lVar5,lVar1);
        lVar10 = lVar5;
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          lVar10 = *(long *)(*(long *)(lVar4 + 0x38) + 8);
          uVar9 = *(undefined8 *)PTR_DAT_0777ab38;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
                lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_03e40f1c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          lVar5 = func_0x03256b10(plVar8);
LAB_03e40f1c:
          lVar5 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(lVar5 + 8))(plVar8,uVar9,auVar11._8_8_,lVar2,lVar5);
          return uVar9;
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
      lVar4 = *(long *)PTR_DAT_0777ab40;
      lVar5 = *(long *)(lVar4 + 0x38);
      if (lVar5 == 0) {
        func_0x03256878(lVar4);
        lVar5 = *(long *)(lVar4 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x0325681c();
      }
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x38) + 0x10))
                        (auVar11._8_8_,lVar10,**(undefined8 **)(lVar5 + 0xb8));
      uVar3 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
      func_0x05a85e88(uVar3,auVar11._0_8_,lVar1,param_5 & 0xffffffff,uVar9,0);
      return uVar3;
    }
    lVar5 = *plVar8;
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
    uVar9 = *(undefined8 *)PTR_DAT_0777ab30;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40dbc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar5 = func_0x03256b10(plVar8);
LAB_03e40dbc:
    lVar5 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(lVar5 + 8))(plVar8,uVar9,auVar11._8_8_,0,lVar5);
    return uVar9;
  }
  lVar5 = *plVar8;
  lVar10 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  uVar9 = *(undefined8 *)PTR_DAT_0777ab20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40b7c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = func_0x03256b10(plVar8);
LAB_03e40b7c:
  lVar5 = func_0x03280b88(*(undefined8 *)(lVar5 + 8),lVar10);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(lVar5 + 8))(plVar8,uVar9,param_2,0,lVar5);
  return uVar9;
}

