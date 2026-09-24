/* Ghidra 12.1.2 native pseudocode; RVA 0x4552CA4; Merger.Services.Backend.Sync.SyncPayloadServiceBase<TPayload>.get_GameStarted; status ok */


ulong Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___get_GameStarted
                (long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long alStack_e0 [3];
  undefined4 uStack_c4;
  long alStack_c0 [2];
  ulong auStack_b0 [2];
  ulong *puStack_a0;
  ulong *puStack_98;
  long *plStack_90;
  long lStack_88;
  
  if ((bRam0000000007e1918e & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772910);
    func_0x03280a18(PTR_DAT_077726c0);
    bRam0000000007e1918e = 1;
  }
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077726c0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04652d38;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    param_3 = 0;
    puVar3 = (undefined8 *)func_0x03256b10(plVar9);
LAB_04652d38:
    lVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if (lVar6 != 0) {
      return (ulong)*(byte *)(lVar6 + 0x20);
    }
  }
  auVar15 = func_0x03280cac();
  plVar9 = auVar15._0_8_;
  auStack_b0[1] = tpidr_el0;
  lStack_88 = *(long *)(auStack_b0[1] + 0x28);
  if ((bRam0000000007e1918f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0776f248);
    func_0x03280a18(PTR_DAT_07771ec0);
    func_0x03280a18(PTR_DAT_0776f8e0);
    bRam0000000007e1918f = 1;
  }
  lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  uVar13 = (ulong)*(uint *)(*(long *)(lVar6 + 0x20) + 0xfc);
  uVar7 = uVar13 + 0xf & 0x1fffffff0;
  puVar12 = (ulong *)((long)auStack_b0 - uVar7);
  lVar14 = (long)puVar12 - uVar7;
  func_0x072ce9a0(lVar14,0,uVar13);
  if ((*(byte *)(*(long *)(lVar6 + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar4 = func_0x03280ca0();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10))();
  puVar2 = PTR_DAT_0776f8e0;
  puVar1 = PTR_DAT_0774e758;
  lVar6 = param_4;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = (long)plVar9;
    func_0x032809c4((long *)(lVar4 + 0x18),plVar9);
    lVar5 = *(long *)(*plVar9 + 0x280);
    puStack_a0 = auVar15._8_8_;
    puStack_98 = puVar12;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar9,&puStack_a0,puVar12);
    func_0x072ce970(lVar14,puVar12,uVar13);
    uVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x05ac10bc(uVar7,0);
    puVar10 = (ulong *)(lVar4 + 0x10);
    *puVar10 = uVar7;
    func_0x032809c4(puVar10,uVar7);
    lVar5 = 0x38;
    if ((param_3 & 1) == 0) {
      lVar5 = 0x30;
    }
    uVar11 = *(undefined8 *)((long)plVar9 + lVar5);
    func_0x072ce970(puVar12,lVar14,uVar13);
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20) + 0x28)) {
      puVar12 = (ulong *)*puVar12;
    }
    lVar5 = *(long *)(*plVar9 + 0x290);
    puStack_a0 = puVar12;
    puStack_98 = (ulong *)uVar11;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar9,&puStack_a0,&plStack_90);
    auVar16._8_8_ = puVar10;
    auVar16._0_8_ = plStack_90;
    auVar15._8_8_ = puVar10;
    auVar15._0_8_ = plStack_90;
    plVar9 = (long *)*puVar10;
    uVar11 = func_0x03280ca0(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_07771ec0;
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07771ec0) {
            lVar5 = lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138;
            goto LAB_04652fa0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = func_0x03256b10(plVar9,*(long *)PTR_DAT_07771ec0,1);
LAB_04652fa0:
      func_0x056ed730(uVar11,plVar9,*(undefined8 *)(lVar5 + 8),0);
      puVar2 = PTR_DAT_0776f240;
      auVar15 = auVar16;
      if (plStack_90 != (long *)0x0) {
        lVar6 = *plStack_90;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0465300c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plStack_90,*(long *)puVar1,0);
LAB_0465300c:
        plVar9 = (long *)(*(code *)*puVar3)(plStack_90,uVar11,puVar3[1]);
        auVar15._0_8_ = plVar9;
        lVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
        func_0x054221d4(lVar6,lVar4,
                        *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30),0);
        if (plVar9 != (long *)0x0) {
          lVar5 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0776f248) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_046530a4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0776f248,1);
LAB_046530a4:
          (*(code *)*puVar3)(plVar9,lVar6,puVar3[1]);
          uVar7 = *puVar10;
          if (*(long *)(auStack_b0[1] + 0x28) == lStack_88) {
            return uVar7;
          }
          goto LAB_046530f0;
        }
      }
    }
  }
  uVar7 = func_0x03280cac();
LAB_046530f0:
  auVar16 = func_0x072ce990(uVar7);
  puVar1 = PTR_DAT_077730b8;
  *(code **)(lVar14 + -0x30) =
       Merger_Services_Backend_Sync_SyncPayloadServiceBase_TPayload___GetResourceValue;
  *(long *)(lVar14 + -0x20) = auVar15._0_8_;
  *(long *)(lVar14 + -0x18) = lVar4;
  *(long *)(lVar14 + -0x10) = auVar15._8_8_;
  *(long *)(lVar14 + -8) = lVar6;
  if ((bRam0000000007e19190 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f1f8);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e19190 = 1;
  }
  plVar9 = *(long **)(auVar16._0_8_ + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x0624cb20(auVar16._8_8_ & 0xffffffff,0);
  puVar1 = PTR_DAT_0776f1f8;
  if (plVar9 == (long *)0x0) {
    uVar7 = func_0x03280cac();
    return uVar7;
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07773688) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_046531d0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07773688,1);
LAB_046531d0:
  lVar6 = (*(code *)*puVar3)(plVar9,uVar11,puVar3[1]);
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar14 + -0x10) = *(undefined8 *)(lVar14 + -0x30);
  *(undefined8 *)(lVar14 + -8) = *(undefined8 *)(lVar14 + -8);
  if (lVar6 != 0) {
    if ((*(byte *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    return (ulong)*(uint *)(lVar6 + 0x20);
  }
  auVar15 = func_0x03280cac();
  *(undefined8 *)(lVar14 + -0x20) = 0x4d0e8b8;
  lVar6 = *(long *)(*(long *)(auVar15._8_8_ + 0x20) + 0xc0);
  *(undefined4 *)(lVar14 + -0x14) = *(undefined4 *)(auVar15._0_8_ + 0x20);
  uVar7 = func_0x05793b4c(lVar14 + -0x14,*(undefined8 *)(lVar6 + 0x40));
  return uVar7;
}

