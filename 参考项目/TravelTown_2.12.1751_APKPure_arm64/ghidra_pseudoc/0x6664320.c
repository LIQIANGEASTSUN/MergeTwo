/* Ghidra 12.1.2 native pseudocode; RVA 0x6664320; MergeEngine.ECS.Systems.Board.BoardQueueSystem.TrackItemDequeueOperation; status ok */

/* WARNING: Possible PIC construction at 0x067645d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067645d4) */
/* WARNING: Removing unreachable block (ram,0x067645d8) */
/* WARNING: Removing unreachable block (ram,0x067645f8) */
/* WARNING: Removing unreachable block (ram,0x06764664) */
/* WARNING: Removing unreachable block (ram,0x06764670) */
/* WARNING: Removing unreachable block (ram,0x0676468c) */
/* WARNING: Removing unreachable block (ram,0x06764694) */
/* WARNING: Removing unreachable block (ram,0x067646a0) */
/* WARNING: Removing unreachable block (ram,0x067646e8) */
/* WARNING: Removing unreachable block (ram,0x06764708) */
/* WARNING: Removing unreachable block (ram,0x06764724) */
/* WARNING: Removing unreachable block (ram,0x0676472c) */
/* WARNING: Removing unreachable block (ram,0x06764754) */
/* WARNING: Removing unreachable block (ram,0x06764738) */
/* WARNING: Removing unreachable block (ram,0x06764744) */
/* WARNING: Removing unreachable block (ram,0x06764764) */
/* WARNING: Removing unreachable block (ram,0x06764774) */
/* WARNING: Removing unreachable block (ram,0x0676477c) */
/* WARNING: Removing unreachable block (ram,0x06764784) */
/* WARNING: Removing unreachable block (ram,0x0676478c) */
/* WARNING: Removing unreachable block (ram,0x0676479c) */
/* WARNING: Removing unreachable block (ram,0x067647a4) */
/* WARNING: Removing unreachable block (ram,0x067647cc) */
/* WARNING: Removing unreachable block (ram,0x067647b0) */
/* WARNING: Removing unreachable block (ram,0x067647bc) */
/* WARNING: Removing unreachable block (ram,0x067647dc) */
/* WARNING: Removing unreachable block (ram,0x06764844) */
/* WARNING: Removing unreachable block (ram,0x067647ec) */
/* WARNING: Removing unreachable block (ram,0x067647f0) */
/* WARNING: Removing unreachable block (ram,0x0676484c) */
/* WARNING: Removing unreachable block (ram,0x067647f4) */
/* WARNING: Removing unreachable block (ram,0x06764828) */
/* WARNING: Removing unreachable block (ram,0x06764874) */
/* WARNING: Removing unreachable block (ram,0x06764830) */
/* WARNING: Removing unreachable block (ram,0x06764850) */
/* WARNING: Removing unreachable block (ram,0x03e4016c) */
/* WARNING: Removing unreachable block (ram,0x03e40178) */
/* WARNING: Removing unreachable block (ram,0x03e40190) */
/* WARNING: Removing unreachable block (ram,0x03e40198) */
/* WARNING: Removing unreachable block (ram,0x03e401d0) */
/* WARNING: Removing unreachable block (ram,0x03e401a4) */
/* WARNING: Removing unreachable block (ram,0x03e401b0) */
/* WARNING: Removing unreachable block (ram,0x03e401dc) */

undefined8
MergeEngine_ECS_Systems_Board_BoardQueueSystem__TrackItemDequeueOperation
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_58 [8];
  
  if ((bRam0000000007e280b5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07807c40);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_077c1e18);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e280b5 = 1;
  }
  puVar2 = PTR_DAT_0777e4a0;
  plVar19 = *(long **)(param_1 + 0x50);
  if (plVar19 == (long *)0x0) {
LAB_067644f0:
    func_0x03280cac();
    puVar2 = PTR_DAT_07807c48;
    auStack_58 = (undefined1  [8])param_4;
    if ((bRam0000000007e280aa & 1) == 0) {
      func_0x03280a18(PTR_DAT_07807c50);
      func_0x03280a18(PTR_DAT_07807c58);
      func_0x03280a18(PTR_DAT_07807c60);
      func_0x03280a18(PTR_DAT_07807c68);
      func_0x03280a18(PTR_DAT_07807c70);
      func_0x03280a18(PTR_DAT_0777b2c0);
      func_0x03280a18(PTR_DAT_07807c78);
      func_0x03280a18(PTR_DAT_07807c80);
      func_0x03280a18(PTR_DAT_07807c48);
      func_0x03280a18(PTR_DAT_07807c88);
      bRam0000000007e280aa = 1;
    }
    uVar20 = func_0x03280ca0(*(undefined8 *)puVar2);
    return uVar20;
  }
  lVar12 = *plVar19;
  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
  uVar20 = *(undefined8 *)PTR_DAT_0777e5f8;
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777e4a0) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_06764404;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar19,*(long *)PTR_DAT_0777e4a0,0);
LAB_06764404:
  plVar19 = (long *)(*(code *)*puVar7)(plVar19,uVar20,param_5,param_6,0,puVar7[1]);
  plVar18 = *(long **)(param_1 + 0x50);
  if (plVar18 == (long *)0x0) goto LAB_067644f0;
  lVar12 = *plVar18;
  uVar21 = *(undefined8 *)PTR_DAT_0776b160;
  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
  uVar20 = *(undefined8 *)PTR_DAT_077c1e18;
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_06764490;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar2,0);
LAB_06764490:
  lVar12 = (*(code *)*puVar7)(plVar18,uVar21,param_2,param_3,uVar20,puVar7[1]);
  lVar13 = *(long *)(param_1 + 0x68);
  if (lVar13 == 0) goto LAB_067644f0;
  lVar10 = *(long *)PTR_DAT_07807c40;
  uVar16 = 0;
  lVar9 = 0;
  lVar8 = param_4;
  plVar18 = plVar19;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0776aeb0);
    func_0x03280a18(PTR_DAT_0777aa90);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777aaa0);
    func_0x03280a18(PTR_DAT_0777aaa8);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777aab0);
    func_0x03280a18(PTR_DAT_077512a8);
    func_0x03280a18(PTR_DAT_07751420);
    func_0x03280a18(PTR_DAT_0777aab8);
    if (*(long *)(lVar10 + 0x38) == 0) {
      func_0x03256878(lVar10);
    }
  }
  lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
  func_0x06a30df4(lVar5,0);
  if (lVar5 == 0) goto LAB_03e402a8;
  *(long *)(lVar5 + 0x30) = param_4;
  func_0x032809c4((long *)(lVar5 + 0x30),param_4);
  if (lVar12 == 0) goto LAB_03e402a8;
  *(long *)(lVar12 + 0x20) = lVar5;
  func_0x032809c4((long *)(lVar12 + 0x20),lVar5);
  if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar5 = func_0x03280ca0();
  func_0x04143c38(lVar5,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x10));
  if (lVar5 == 0) goto LAB_03e402a8;
  lVar11 = *(long *)(lVar5 + 0x10);
  lVar14 = *(long *)(*(long *)(lVar10 + 0x38) + 0x18);
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar11 == 0) goto LAB_03e402a8;
  uVar4 = *(uint *)(lVar5 + 0x18);
  if (uVar4 < *(uint *)(lVar11 + 0x18)) {
    *(uint *)(lVar5 + 0x18) = uVar4 + 1;
    plVar6 = (long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
    *plVar6 = lVar12;
    func_0x032809c4(plVar6,lVar12);
    if (plVar19 == (long *)0x0) goto LAB_03e3ffbc;
LAB_03e3ff28:
    lVar12 = *(long *)(lVar5 + 0x10);
    lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + 0x18);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_03e402a8;
    uVar4 = *(uint *)(lVar5 + 0x18);
    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar4 + 1;
      plVar6 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
      *plVar6 = (long)plVar19;
      func_0x032809c4(plVar6,plVar19);
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(lVar5,plVar19);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777aab0 + 0x130);
    if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0777aab0))
    goto LAB_03e3ffbc;
    lVar12 = 0;
    if (plVar19[0x1b] != 0) {
      lVar12 = *(long *)(plVar19[0x1b] + 0x10);
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
    func_0x0414446c(lVar5,lVar12);
    if (plVar19 != (long *)0x0) goto LAB_03e3ff28;
LAB_03e3ffbc:
    lVar12 = 0;
  }
  plVar19 = *(long **)(lVar13 + 0x48);
  lVar11 = 0;
  if (lVar12 != 0) {
    lVar11 = lVar12;
  }
  if (plVar19 != (long *)0x0) {
    lVar12 = *plVar19;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777aaa8) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar17 + 9) * 0x10 + 0x138);
          goto LAB_03e40028;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    lVar8 = 9;
    puVar7 = (undefined8 *)func_0x03256b10(plVar19);
LAB_03e40028:
    lVar12 = (*(code *)*puVar7)(plVar19,puVar7[1]);
    if (lVar12 != 0) {
      lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x28);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x28);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) {
        lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c();
        }
        uVar20 = **(undefined8 **)(lVar8 + 0xb8);
        lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aaa0);
        plVar18 = (long *)0x0;
        func_0x053569b8(lVar8,uVar20,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x30));
        lVar14 = *(long *)(*(long *)(lVar10 + 0x38) + 0x28);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c();
        }
        *(long *)(*(long *)(lVar14 + 0xb8) + 8) = lVar8;
        lVar14 = *(long *)(*(long *)(lVar10 + 0x38) + 0x28);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = func_0x0325681c();
        }
        func_0x032809c4(*(long *)(lVar14 + 0xb8) + 8,lVar8);
      }
      uVar20 = func_0x03d50a94(lVar12,lVar8,*(undefined8 *)PTR_DAT_0777aa90);
      uVar4 = func_0x03d37bc0(uVar20,lVar11,*(undefined8 *)PTR_DAT_0776aeb0);
      auStack_58._4_2_ = 0;
      lVar8 = *(long *)PTR_DAT_07751420;
      func_0x04377614(auStack_58 + 4,uVar4 & 1);
    }
  }
  plVar19 = *(long **)(lVar13 + 0x40);
  if (plVar19 != (long *)0x0) {
    lVar12 = *plVar19;
    lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + 0x38);
    uVar20 = *(undefined8 *)PTR_DAT_0777aab8;
    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar12 = lVar12 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40264;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    lVar12 = func_0x03256b10(plVar19);
LAB_03e40264:
    lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
    uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,lVar5,0,lVar12);
    return uVar20;
  }
LAB_03e402a8:
  auVar22 = func_0x03280cac();
  lVar12 = lVar8;
  if ((*(long *)(lVar8 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0777aac0), *(long *)(lVar8 + 0x38) == 0)) {
    func_0x03256878(lVar8);
  }
  plVar19 = *(long **)(auVar22._0_8_ + 0x40);
  if (plVar19 == (long *)0x0) {
    auVar22 = func_0x03280cac();
    lVar13 = lVar12;
    if ((*(long *)(lVar12 + 0x38) == 0) &&
       (func_0x03280a18(PTR_DAT_0777aac8), *(long *)(lVar12 + 0x38) == 0)) {
      func_0x03256878(lVar12);
    }
    plVar19 = *(long **)(auVar22._0_8_ + 0x40);
    if (plVar19 == (long *)0x0) {
      auVar22 = func_0x03280cac();
      lVar12 = lVar13;
      if ((*(long *)(lVar13 + 0x38) == 0) &&
         (func_0x03280a18(PTR_DAT_0777aad0), *(long *)(lVar13 + 0x38) == 0)) {
        func_0x03256878(lVar13);
      }
      plVar19 = *(long **)(auVar22._0_8_ + 0x40);
      if (plVar19 == (long *)0x0) {
        auVar22 = func_0x03280cac();
        lVar13 = lVar12;
        if ((*(long *)(lVar12 + 0x38) == 0) &&
           (func_0x03280a18(PTR_DAT_0777aad8), *(long *)(lVar12 + 0x38) == 0)) {
          func_0x03256878(lVar12);
        }
        plVar19 = *(long **)(auVar22._0_8_ + 0x40);
        if (plVar19 == (long *)0x0) {
          auVar22 = func_0x03280cac();
          lVar12 = lVar13;
          if ((*(long *)(lVar13 + 0x38) == 0) &&
             (func_0x03280a18(PTR_DAT_0777aae0), *(long *)(lVar13 + 0x38) == 0)) {
            func_0x03256878(lVar13);
          }
          plVar19 = *(long **)(auVar22._0_8_ + 0x40);
          if (plVar19 == (long *)0x0) {
            auVar22 = func_0x03280cac();
            lVar13 = lVar12;
            if ((*(long *)(lVar12 + 0x38) == 0) &&
               (func_0x03280a18(PTR_DAT_0777aae8), *(long *)(lVar12 + 0x38) == 0)) {
              func_0x03256878(lVar12);
            }
            plVar19 = *(long **)(auVar22._0_8_ + 0x40);
            if (plVar19 == (long *)0x0) {
              auVar22 = func_0x03280cac();
              lVar12 = lVar13;
              if ((*(long *)(lVar13 + 0x38) == 0) &&
                 (func_0x03280a18(PTR_DAT_0777aaf0), *(long *)(lVar13 + 0x38) == 0)) {
                func_0x03256878(lVar13);
              }
              plVar19 = *(long **)(auVar22._0_8_ + 0x40);
              if (plVar19 == (long *)0x0) {
                auVar22 = func_0x03280cac();
                puVar3 = PTR_DAT_0777ab00;
                puVar2 = PTR_DAT_0777aaf8;
                if ((bRam0000000007e17dbe & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0777aaf8);
                  func_0x03280a18(PTR_DAT_0777ab00);
                  func_0x03280a18(PTR_DAT_0777ab08);
                  func_0x03280a18(PTR_DAT_0777ab10);
                  bRam0000000007e17dbe = 1;
                }
                plVar19 = *(long **)(auVar22._0_8_ + 0x40);
                uVar20 = func_0x03d2c6a8(auVar22._8_8_,*(undefined8 *)puVar2);
                uVar20 = func_0x03d5ffd0(uVar20,*(undefined8 *)puVar3);
                if (plVar19 == (long *)0x0) {
                  auVar22 = func_0x03280cac();
                  lVar13 = lVar12;
                  if ((*(long *)(lVar12 + 0x38) == 0) &&
                     (func_0x03280a18(PTR_DAT_0777ab18), *(long *)(lVar12 + 0x38) == 0)) {
                    func_0x03256878(lVar12);
                  }
                  plVar19 = *(long **)(auVar22._0_8_ + 0x40);
                  if (plVar19 == (long *)0x0) {
                    auVar22 = func_0x03280cac();
                    lVar12 = lVar13;
                    if ((*(long *)(lVar13 + 0x38) == 0) &&
                       (func_0x03280a18(PTR_DAT_0777ab20), *(long *)(lVar13 + 0x38) == 0)) {
                      func_0x03256878(lVar13);
                    }
                    plVar19 = *(long **)(auVar22._0_8_ + 0x40);
                    if (plVar19 == (long *)0x0) {
                      auVar22 = func_0x03280cac();
                      lVar13 = lVar12;
                      plVar19 = plVar18;
                      if (plVar18[7] == 0) {
                        func_0x03280a18(PTR_DAT_077507d0);
                        func_0x03280a18(PTR_DAT_0775a958);
                        func_0x03280a18(PTR_DAT_07750838);
                        func_0x03280a18(PTR_DAT_0777ab28);
                        func_0x03280a18(PTR_DAT_07779e90);
                        if (plVar18[7] == 0) {
                          func_0x03256878(plVar18);
                        }
                      }
                      plVar6 = *(long **)(auVar22._0_8_ + 0x40);
                      lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                      func_0x04fe1fa4(lVar8,*(undefined8 *)PTR_DAT_0775a958);
                      if (lVar8 != 0) {
                        plVar19 = *(long **)PTR_DAT_077507d0;
                        func_0x04fe2d7c(lVar8,*(undefined8 *)PTR_DAT_07779e90);
                        lVar13 = lVar12;
                        if (plVar6 != (long *)0x0) {
                          lVar12 = *plVar6;
                          lVar13 = *(long *)(plVar18[7] + 8);
                          uVar20 = *(undefined8 *)PTR_DAT_0777ab28;
                          uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
                          if (uVar16 != 0) {
                            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
                                lVar12 = lVar12 + (long)(int)(*piVar17 +
                                                             (uint)*(ushort *)(lVar13 + 0x50)) *
                                                  0x10 + 0x138;
                                goto LAB_03e40cdc;
                              }
                              uVar16 = uVar16 - 1;
                              piVar17 = piVar17 + 4;
                            } while (uVar16 != 0);
                          }
                          lVar12 = func_0x03256b10(plVar6);
LAB_03e40cdc:
                          lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar20 = (**(code **)(lVar12 + 8))
                                             (plVar6,uVar20,auVar22._8_8_,lVar8,lVar12);
                          return uVar20;
                        }
                      }
                      auVar22 = func_0x03280cac();
                      lVar12 = lVar13;
                      if ((*(long *)(lVar13 + 0x38) == 0) &&
                         (func_0x03280a18(PTR_DAT_0777ab30), *(long *)(lVar13 + 0x38) == 0)) {
                        func_0x03256878(lVar13);
                      }
                      plVar18 = *(long **)(auVar22._0_8_ + 0x40);
                      if (plVar18 == (long *)0x0) {
                        auVar22 = func_0x03280cac();
                        lVar13 = lVar12;
                        plVar18 = plVar19;
                        if (plVar19[7] == 0) {
                          func_0x03280a18(PTR_DAT_077507d0);
                          func_0x03280a18(PTR_DAT_0775a958);
                          func_0x03280a18(PTR_DAT_07750838);
                          func_0x03280a18(PTR_DAT_07779e90);
                          func_0x03280a18(PTR_DAT_0777ab38);
                          if (plVar19[7] == 0) {
                            func_0x03256878(plVar19);
                          }
                        }
                        plVar6 = *(long **)(auVar22._0_8_ + 0x40);
                        lVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
                        func_0x04fe1fa4(lVar8,*(undefined8 *)PTR_DAT_0775a958);
                        if (lVar8 != 0) {
                          plVar18 = *(long **)PTR_DAT_077507d0;
                          func_0x04fe2d7c(lVar8,*(undefined8 *)PTR_DAT_07779e90,lVar12,plVar18);
                          lVar13 = lVar12;
                          if (plVar6 != (long *)0x0) {
                            lVar12 = *plVar6;
                            lVar13 = *(long *)(plVar19[7] + 8);
                            uVar20 = *(undefined8 *)PTR_DAT_0777ab38;
                            uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
                            if (uVar16 != 0) {
                              piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
                                  lVar12 = lVar12 + (long)(int)(*piVar17 +
                                                               (uint)*(ushort *)(lVar13 + 0x50)) *
                                                    0x10 + 0x138;
                                  goto LAB_03e40f1c;
                                }
                                uVar16 = uVar16 - 1;
                                piVar17 = piVar17 + 4;
                              } while (uVar16 != 0);
                            }
                            lVar12 = func_0x03256b10(plVar6);
LAB_03e40f1c:
                            lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            uVar20 = (**(code **)(lVar12 + 8))
                                               (plVar6,uVar20,auVar22._8_8_,lVar8,lVar12);
                            return uVar20;
                          }
                        }
                        auVar22 = func_0x03280cac();
                        if (*(long *)(lVar9 + 0x38) == 0) {
                          func_0x03280a18(PTR_DAT_0777ab40);
                          func_0x03280a18(PTR_DAT_0777ab48);
                          if (*(long *)(lVar9 + 0x38) == 0) {
                            func_0x03256878(lVar9);
                          }
                        }
                        lVar8 = *(long *)PTR_DAT_0777ab40;
                        lVar12 = *(long *)(lVar8 + 0x38);
                        if (lVar12 == 0) {
                          func_0x03256878(lVar8);
                          lVar12 = *(long *)(lVar8 + 0x38);
                        }
                        lVar12 = *(long *)(lVar12 + 0x10);
                        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                          lVar12 = func_0x0325681c();
                        }
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          func_0x03280b8c();
                        }
                        lVar12 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                          lVar12 = func_0x0325681c();
                        }
                        uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x10))
                                           (auVar22._8_8_,lVar13,**(undefined8 **)(lVar12 + 0xb8));
                        uVar21 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
                        func_0x05a85e88(uVar21,auVar22._0_8_,plVar18,uVar16 & 0xffffffff,uVar20,0);
                        return uVar21;
                      }
                      lVar12 = *plVar18;
                      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
                      uVar20 = *(undefined8 *)PTR_DAT_0777ab30;
                      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
                      if (uVar16 != 0) {
                        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
                            lVar12 = lVar12 + (long)(int)(*piVar17 +
                                                         (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 +
                                     0x138;
                            goto LAB_03e40dbc;
                          }
                          uVar16 = uVar16 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar16 != 0);
                      }
                      lVar12 = func_0x03256b10(plVar18);
LAB_03e40dbc:
                      lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar20 = (**(code **)(lVar12 + 8))(plVar18,uVar20,auVar22._8_8_,0,lVar12);
                      return uVar20;
                    }
                    lVar12 = *plVar19;
                    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
                    uVar20 = *(undefined8 *)PTR_DAT_0777ab20;
                    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar16 != 0) {
                      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
                          lVar12 = lVar12 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x50))
                                            * 0x10 + 0x138;
                          goto LAB_03e40b7c;
                        }
                        uVar16 = uVar16 - 1;
                        piVar17 = piVar17 + 4;
                      } while (uVar16 != 0);
                    }
                    lVar12 = func_0x03256b10(plVar19);
LAB_03e40b7c:
                    lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,auVar22._8_8_,0,lVar12);
                    return uVar20;
                  }
                  lVar13 = *plVar19;
                  lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
                  uVar20 = *(undefined8 *)PTR_DAT_0777ab18;
                  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar16 != 0) {
                    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)(lVar12 + 0x20)) {
                        lVar13 = lVar13 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar12 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_03e40a9c;
                      }
                      uVar16 = uVar16 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar16 != 0);
                  }
                  lVar13 = func_0x03256b10(plVar19);
LAB_03e40a9c:
                  lVar12 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,auVar22._8_8_,0,lVar12);
                  return uVar20;
                }
                lVar12 = *plVar19;
                lVar13 = *(long *)PTR_DAT_0777ab08;
                uVar21 = *(undefined8 *)PTR_DAT_0777ab10;
                uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_03e409bc;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                lVar12 = func_0x03256b10(plVar19);
LAB_03e409bc:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar21,uVar20,0,lVar12);
                return uVar20;
              }
              lVar12 = *plVar19;
              lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
              uVar20 = *(undefined8 *)PTR_DAT_0777aaf0;
              uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
                    lVar12 = lVar12 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_03e40894;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              lVar12 = func_0x03256b10(plVar19);
LAB_03e40894:
              lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x03e408c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,auVar22._8_8_,0,lVar12);
              return uVar20;
            }
            lVar13 = *plVar19;
            lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
            uVar20 = *(undefined8 *)PTR_DAT_0777aae8;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)(lVar12 + 0x20)) {
                  lVar13 = lVar13 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_03e407b4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            lVar13 = func_0x03256b10(plVar19);
LAB_03e407b4:
            lVar12 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e407e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,auVar22._8_8_,0,lVar12);
            return uVar20;
          }
          lVar12 = *plVar19;
          lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
          uVar20 = *(undefined8 *)PTR_DAT_0777aae0;
          uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
                lVar12 = lVar12 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_03e406d4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          lVar12 = func_0x03256b10(plVar19);
LAB_03e406d4:
          lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x03e40704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,auVar22._8_8_,0,lVar12);
          return uVar20;
        }
        lVar13 = *plVar19;
        lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
        uVar20 = *(undefined8 *)PTR_DAT_0777aad8;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)(lVar12 + 0x20)) {
              lVar13 = lVar13 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03e405f4;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        lVar13 = func_0x03256b10(plVar19);
LAB_03e405f4:
        lVar12 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,auVar22._8_8_,0,lVar12);
        return uVar20;
      }
      lVar12 = *plVar19;
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      uVar20 = *(undefined8 *)PTR_DAT_0777aad0;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
            lVar12 = lVar12 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_03e40514;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      lVar12 = func_0x03256b10(plVar19);
LAB_03e40514:
      lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x03e40544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,auVar22._8_8_,0,lVar12);
      return uVar20;
    }
    lVar13 = *plVar19;
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
    uVar20 = *(undefined8 *)PTR_DAT_0777aac8;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)(lVar12 + 0x20)) {
          lVar13 = lVar13 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40434;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    lVar13 = func_0x03256b10(plVar19);
LAB_03e40434:
    lVar12 = func_0x03280b88(*(undefined8 *)(lVar13 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,auVar22._8_8_,0,lVar12);
    return uVar20;
  }
  lVar12 = *plVar19;
  lVar13 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
  uVar20 = *(undefined8 *)PTR_DAT_0777aac0;
  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x20)) {
        lVar12 = lVar12 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e40354;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  lVar12 = func_0x03256b10(plVar19);
LAB_03e40354:
  lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar13);
                    /* WARNING: Could not recover jumptable at 0x03e40384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar20 = (**(code **)(lVar12 + 8))(plVar19,uVar20,auVar22._8_8_,0,lVar12);
  return uVar20;
}

