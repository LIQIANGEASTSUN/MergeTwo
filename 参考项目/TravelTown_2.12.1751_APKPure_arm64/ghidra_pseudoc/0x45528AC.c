/* Ghidra 12.1.2 native pseudocode; RVA 0x45528AC; Merger.Services.Backend.Sync.SyncPayloadServiceBase<TPayload>.HandleSyncRequest; status ok */


ulong Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___HandleSyncRequest
                (long *param_1,ulong *param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_68;
  code *pcStack_60;
  long lStack_58;
  
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
  lVar3 = func_0x03280ca0();
  func_0x04038eac(lVar3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10));
  puVar2 = PTR_DAT_0776f8e0;
  puVar1 = PTR_DAT_0774e758;
  lVar9 = param_4;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = (long)param_1;
    func_0x032809c4((long *)(lVar3 + 0x18),param_1);
    uVar4 = (**(code **)(*param_1 + 0x278))(param_1,param_2,*(undefined8 *)(*param_1 + 0x280));
    uVar5 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x05ac10bc(uVar5,0);
    param_2 = (ulong *)(lVar3 + 0x10);
    *param_2 = uVar5;
    func_0x032809c4(param_2,uVar5);
    lVar8 = 0x38;
    if ((param_3 & 1) == 0) {
      lVar8 = 0x30;
    }
    plVar6 = (long *)(**(code **)(*param_1 + 0x288))
                               (param_1,uVar4,*(undefined8 *)((long)param_1 + lVar8),
                                *(undefined8 *)(*param_1 + 0x290));
    plVar11 = (long *)*param_2;
    uVar4 = func_0x03280ca0(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_07771ec0;
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07771ec0) {
            lVar8 = lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138;
            goto LAB_04652a5c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      lVar8 = func_0x03256b10(plVar11,*(long *)PTR_DAT_07771ec0,1);
LAB_04652a5c:
      func_0x056ed730(uVar4,plVar11,*(undefined8 *)(lVar8 + 8),0);
      puVar2 = PTR_DAT_0776f240;
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04652ac8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar1,0);
LAB_04652ac8:
        plVar6 = (long *)(*(code *)*puVar7)(plVar6,uVar4,puVar7[1]);
        lVar9 = func_0x03280ca0(*(undefined8 *)puVar2);
        func_0x054221d4(lVar9,lVar3,
                        *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30),0);
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0776f248) {
                puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_04652b60;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0776f248,1);
LAB_04652b60:
          (*(code *)*puVar7)(plVar6,lVar9,puVar7[1]);
          return *param_2;
        }
      }
    }
  }
  auVar12 = func_0x03280cac();
  puVar1 = PTR_DAT_077730b8;
  uStack_68 = lVar3;
  pcStack_60 = (code *)param_2;
  lStack_58 = lVar9;
  if ((bRam0000000007e1918d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f1f8);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e1918d = 1;
  }
  plVar6 = *(long **)(auVar12._0_8_ + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar4 = func_0x0624cb20(auVar12._8_8_ & 0xffffffff,0);
  puVar1 = PTR_DAT_0776f1f8;
  if (plVar6 == (long *)0x0) {
    uVar5 = func_0x03280cac();
    return uVar5;
  }
  lVar9 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07773688) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04652c6c;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07773688,1);
LAB_04652c6c:
  lVar9 = (*(code *)*puVar7)(plVar6,uVar4,puVar7[1]);
  pcStack_60 = Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___GetResourceValue;
  if (lVar9 != 0) {
    if ((*(byte *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    return (ulong)*(uint *)(lVar9 + 0x20);
  }
  auVar12 = func_0x03280cac();
  uStack_68 = CONCAT44(*(undefined4 *)(auVar12._0_8_ + 0x20),(undefined4)uStack_68);
  uVar5 = func_0x05793b4c((long)&uStack_68 + 4,
                          *(undefined8 *)(*(long *)(*(long *)(auVar12._8_8_ + 0x20) + 0xc0) + 0x40))
  ;
  return uVar5;
}

