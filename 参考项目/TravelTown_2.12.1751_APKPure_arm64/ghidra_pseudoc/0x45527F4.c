/* Ghidra 12.1.2 native pseudocode; RVA 0x45527F4; Merger.Services.Backend.Sync.SyncPayloadServiceBase<TPayload>.get_GameStarted; status ok */


ulong Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___get_GameStarted
                (long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong *puVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_88;
  code *pcStack_80;
  long lStack_78;
  code *pcStack_70;
  
  if ((bRam0000000007e1918b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772910);
    func_0x03280a18(PTR_DAT_077726c0);
    bRam0000000007e1918b = 1;
  }
  plVar10 = *(long **)(param_1 + 0x40);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077726c0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04652888;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    param_3 = 0;
    puVar3 = (undefined8 *)func_0x03256b10(plVar10);
LAB_04652888:
    lVar6 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (lVar6 != 0) {
      return (ulong)*(byte *)(lVar6 + 0x20);
    }
  }
  auVar13 = func_0x03280cac();
  puVar11 = auVar13._8_8_;
  plVar10 = auVar13._0_8_;
  pcStack_70 = Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___HandleSyncRequest;
  if ((bRam0000000007e1918c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0776f248);
    func_0x03280a18(PTR_DAT_07771ec0);
    func_0x03280a18(PTR_DAT_0776f8e0);
    bRam0000000007e1918c = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar4 = func_0x03280ca0();
  func_0x04038eac(lVar4,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10));
  puVar2 = PTR_DAT_0776f8e0;
  puVar1 = PTR_DAT_0774e758;
  lVar6 = param_4;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = (long)plVar10;
    func_0x032809c4((long *)(lVar4 + 0x18),plVar10);
    uVar5 = (**(code **)(*plVar10 + 0x278))(plVar10,puVar11,*(undefined8 *)(*plVar10 + 0x280));
    uVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x05ac10bc(uVar8,0);
    puVar11 = (ulong *)(lVar4 + 0x10);
    *puVar11 = uVar8;
    func_0x032809c4(puVar11,uVar8);
    lVar7 = 0x38;
    if ((param_3 & 1) == 0) {
      lVar7 = 0x30;
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x288))
                                (plVar10,uVar5,*(undefined8 *)((long)plVar10 + lVar7),
                                 *(undefined8 *)(*plVar10 + 0x290));
    plVar12 = (long *)*puVar11;
    uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_07771ec0;
    if (plVar12 != (long *)0x0) {
      lVar7 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07771ec0) {
            lVar7 = lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138;
            goto LAB_04652a5c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar7 = func_0x03256b10(plVar12,*(long *)PTR_DAT_07771ec0,1);
LAB_04652a5c:
      func_0x056ed730(uVar5,plVar12,*(undefined8 *)(lVar7 + 8),0);
      puVar2 = PTR_DAT_0776f240;
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04652ac8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar1,0);
LAB_04652ac8:
        plVar10 = (long *)(*(code *)*puVar3)(plVar10,uVar5,puVar3[1]);
        lVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
        func_0x054221d4(lVar6,lVar4,
                        *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30),0);
        if (plVar10 != (long *)0x0) {
          lVar4 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0776f248) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_04652b60;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0776f248,1);
LAB_04652b60:
          (*(code *)*puVar3)(plVar10,lVar6,puVar3[1]);
          return *puVar11;
        }
      }
    }
  }
  auVar13 = func_0x03280cac();
  puVar1 = PTR_DAT_077730b8;
  uStack_88 = lVar4;
  pcStack_80 = (code *)puVar11;
  lStack_78 = lVar6;
  if ((bRam0000000007e1918d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f1f8);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e1918d = 1;
  }
  plVar10 = *(long **)(auVar13._0_8_ + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x0624cb20(auVar13._8_8_ & 0xffffffff,0);
  puVar1 = PTR_DAT_0776f1f8;
  if (plVar10 == (long *)0x0) {
    uVar8 = func_0x03280cac();
    return uVar8;
  }
  lVar6 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07773688) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_04652c6c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07773688,1);
LAB_04652c6c:
  lVar6 = (*(code *)*puVar3)(plVar10,uVar5,puVar3[1]);
  pcStack_80 = Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___GetResourceValue;
  if (lVar6 != 0) {
    if ((*(byte *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    return (ulong)*(uint *)(lVar6 + 0x20);
  }
  auVar13 = func_0x03280cac();
  uStack_88 = CONCAT44(*(undefined4 *)(auVar13._0_8_ + 0x20),(undefined4)uStack_88);
  uVar8 = func_0x05793b4c((long)&uStack_88 + 4,
                          *(undefined8 *)(*(long *)(*(long *)(auVar13._8_8_ + 0x20) + 0xc0) + 0x40))
  ;
  return uVar8;
}

