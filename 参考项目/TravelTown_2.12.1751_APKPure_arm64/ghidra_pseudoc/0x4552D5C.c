/* Ghidra 12.1.2 native pseudocode; RVA 0x4552D5C; Merger.Services.Backend.Sync.SyncPayloadServiceBase<TPayload>.HandleSyncRequest; status ok */


ulong Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___HandleSyncRequest
                (long *param_1,ulong *param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long alStack_c0 [3];
  undefined4 uStack_a4;
  long alStack_a0 [2];
  ulong auStack_90 [2];
  ulong *puStack_80;
  ulong *puStack_78;
  long *plStack_70;
  long lStack_68;
  
  auStack_90[1] = tpidr_el0;
  lStack_68 = *(long *)(auStack_90[1] + 0x28);
  if ((bRam0000000007e1918f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0776f248);
    func_0x03280a18(PTR_DAT_07771ec0);
    func_0x03280a18(PTR_DAT_0776f8e0);
    bRam0000000007e1918f = 1;
  }
  lVar8 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  uVar12 = (ulong)*(uint *)(*(long *)(lVar8 + 0x20) + 0xfc);
  uVar6 = uVar12 + 0xf & 0x1fffffff0;
  puVar10 = (ulong *)((long)auStack_90 - uVar6);
  lVar13 = (long)puVar10 - uVar6;
  func_0x072ce9a0(lVar13,0,uVar12);
  if ((*(byte *)(*(long *)(lVar8 + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar3 = func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10))();
  puVar2 = PTR_DAT_0776f8e0;
  puVar1 = PTR_DAT_0774e758;
  lVar8 = param_4;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = (long)param_1;
    func_0x032809c4((long *)(lVar3 + 0x18),param_1);
    lVar5 = *(long *)(*param_1 + 0x280);
    puStack_80 = param_2;
    puStack_78 = puVar10;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,param_1,&puStack_80,puVar10);
    func_0x072ce970(lVar13,puVar10,uVar12);
    uVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x05ac10bc(uVar6,0);
    param_2 = (ulong *)(lVar3 + 0x10);
    *param_2 = uVar6;
    func_0x032809c4(param_2,uVar6);
    lVar5 = 0x38;
    if ((param_3 & 1) == 0) {
      lVar5 = 0x30;
    }
    uVar9 = *(undefined8 *)((long)param_1 + lVar5);
    func_0x072ce970(puVar10,lVar13,uVar12);
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20) + 0x28)) {
      puVar10 = (ulong *)*puVar10;
    }
    lVar5 = *(long *)(*param_1 + 0x290);
    puStack_80 = puVar10;
    puStack_78 = (ulong *)uVar9;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,param_1,&puStack_80,&plStack_70);
    plVar11 = (long *)*param_2;
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_07771ec0;
    param_1 = plStack_70;
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07771ec0) {
            lVar5 = lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138;
            goto LAB_04652fa0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = func_0x03256b10(plVar11,*(long *)PTR_DAT_07771ec0,1);
LAB_04652fa0:
      func_0x056ed730(uVar9,plVar11,*(undefined8 *)(lVar5 + 8),0);
      puVar2 = PTR_DAT_0776f240;
      if (plStack_70 != (long *)0x0) {
        lVar8 = *plStack_70;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0465300c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plStack_70,*(long *)puVar1,0);
LAB_0465300c:
        param_1 = (long *)(*(code *)*puVar4)(plStack_70,uVar9,puVar4[1]);
        lVar8 = func_0x03280ca0(*(undefined8 *)puVar2);
        func_0x054221d4(lVar8,lVar3,
                        *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30),0);
        if (param_1 != (long *)0x0) {
          lVar5 = *param_1;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0776f248) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_046530a4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_0776f248,1);
LAB_046530a4:
          (*(code *)*puVar4)(param_1,lVar8,puVar4[1]);
          uVar6 = *param_2;
          if (*(long *)(auStack_90[1] + 0x28) == lStack_68) {
            return uVar6;
          }
          goto LAB_046530f0;
        }
      }
    }
  }
  uVar6 = func_0x03280cac();
LAB_046530f0:
  auVar14 = func_0x072ce990(uVar6);
  puVar1 = PTR_DAT_077730b8;
  *(code **)(lVar13 + -0x30) =
       Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___GetResourceValue;
  *(long **)(lVar13 + -0x20) = param_1;
  *(long *)(lVar13 + -0x18) = lVar3;
  *(ulong **)(lVar13 + -0x10) = param_2;
  *(long *)(lVar13 + -8) = lVar8;
  if ((bRam0000000007e19190 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f1f8);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e19190 = 1;
  }
  plVar11 = *(long **)(auVar14._0_8_ + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar9 = func_0x0624cb20(auVar14._8_8_ & 0xffffffff,0);
  puVar1 = PTR_DAT_0776f1f8;
  if (plVar11 == (long *)0x0) {
    uVar6 = func_0x03280cac();
    return uVar6;
  }
  lVar8 = *plVar11;
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07773688) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_046531d0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07773688,1);
LAB_046531d0:
  lVar8 = (*(code *)*puVar4)(plVar11,uVar9,puVar4[1]);
  lVar3 = *(long *)puVar1;
  *(undefined8 *)(lVar13 + -0x10) = *(undefined8 *)(lVar13 + -0x30);
  *(undefined8 *)(lVar13 + -8) = *(undefined8 *)(lVar13 + -8);
  if (lVar8 != 0) {
    if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    return (ulong)*(uint *)(lVar8 + 0x20);
  }
  auVar14 = func_0x03280cac();
  *(undefined8 *)(lVar13 + -0x20) = 0x4d0e8b8;
  lVar8 = *(long *)(*(long *)(auVar14._8_8_ + 0x20) + 0xc0);
  *(undefined4 *)(lVar13 + -0x14) = *(undefined4 *)(auVar14._0_8_ + 0x20);
  uVar6 = func_0x05793b4c(lVar13 + -0x14,*(undefined8 *)(lVar8 + 0x40));
  return uVar6;
}

