
void Recovered_ItemMover_OnDragEnded_0x02C04CCC(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if ((bRam0000000006812ba9 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f27e0);
    func_0x02ad6de0(PTR_DAT_063fcde0);
    func_0x02ad6de0(PTR_DAT_063fcde8);
    func_0x02ad6de0(PTR_DAT_063fcdf0);
    func_0x02ad6de0(PTR_DAT_063fcdf8);
    func_0x02ad6de0(PTR_DAT_063fce00);
    func_0x02ad6de0(PTR_DAT_063fce08);
    func_0x02ad6de0(PTR_DAT_063fce10);
    func_0x02ad6de0(PTR_DAT_063fce18);
    func_0x02ad6de0(PTR_DAT_063fce20);
    func_0x02ad6de0(PTR_DAT_063f9ed8);
    func_0x02ad6de0(PTR_DAT_063fce28);
    func_0x02ad6de0(PTR_DAT_063fce30);
    func_0x02ad6de0(PTR_DAT_063fce38);
    func_0x02ad6de0(PTR_DAT_063fce40);
    func_0x02ad6de0(PTR_DAT_063fce48);
    func_0x02ad6de0(PTR_DAT_063fa418);
    func_0x02ad6de0(PTR_DAT_063fa420);
    func_0x02ad6de0(PTR_DAT_063f0f18);
    func_0x02ad6de0(PTR_DAT_063fce50);
    func_0x02ad6de0(PTR_DAT_063fce58);
    func_0x02ad6de0(PTR_DAT_063fce60);
    func_0x02ad6de0(PTR_DAT_063fce68);
    func_0x02ad6de0(PTR_DAT_063fce70);
    func_0x02ad6de0(PTR_DAT_063fce78);
    bRam0000000006812ba9 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x037233e0(*(long *)(param_1 + 0x30),0,*(undefined8 *)PTR_DAT_063fce60);
    plVar9 = *(long **)(param_1 + 0x58);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
      puVar7 = PTR_DAT_063fce78;
      puVar6 = PTR_DAT_063fce50;
      puVar5 = PTR_DAT_063fce48;
      puVar4 = PTR_DAT_063fce28;
      puVar3 = PTR_DAT_063fce10;
      puVar2 = PTR_DAT_063fce08;
      puVar1 = PTR_DAT_063fcdf8;
      lVar12 = *(long *)(param_1 + 0x68);
      if (lVar12 != 0) {
        uVar16 = 0;
        lVar18 = 0x20;
        do {
          if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar16) {
            uVar19 = *(undefined4 *)(param_1 + 0x44);
            uVar20 = *(undefined4 *)(param_1 + 0x48);
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              func_0x02ad6f5c();
            }
            iVar8 = func_0x05cb0b3c(uVar19,uVar20,lVar12,0);
            if (iVar8 != 0) {
              lVar12 = *(long *)puVar7;
              uVar13 = *(undefined8 *)(param_1 + 0x68);
              if (*(int *)(lVar12 + 0xe4) == 0) {
                func_0x02ad6f5c();
                lVar12 = *(long *)puVar7;
              }
              puVar10 = *(undefined8 **)(lVar12 + 0xb8);
              lVar18 = puVar10[5];
              if (lVar18 == 0) {
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  func_0x02ad6f5c();
                  puVar10 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                }
                uVar17 = *puVar10;
                lVar18 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fce20);
                func_0x04db72bc(lVar18,uVar17,*(undefined8 *)PTR_DAT_063fce68,0);
                plVar9 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x28);
                *plVar9 = lVar18;
                func_0x02ad6d8c(plVar9,lVar18);
              }
              uVar13 = func_0x0353bbfc(uVar13,lVar18,*(undefined8 *)puVar1);
              lVar12 = func_0x0354c148(uVar13,*(undefined8 *)puVar2);
              lVar18 = *(long *)puVar7;
              if (*(int *)(lVar18 + 0xe4) == 0) {
                func_0x02ad6f5c(lVar18);
                lVar18 = *(long *)puVar7;
              }
              puVar10 = *(undefined8 **)(lVar18 + 0xb8);
              lVar14 = puVar10[6];
              if (lVar14 == 0) {
                if (*(int *)(lVar18 + 0xe4) == 0) {
                  func_0x02ad6f5c(lVar18);
                  puVar10 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                }
                uVar13 = *puVar10;
                lVar14 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fce58);
                func_0x03eb310c(lVar14,uVar13,*(undefined8 *)PTR_DAT_063fce70,0);
                plVar9 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x30);
                *plVar9 = lVar14;
                func_0x02ad6d8c(plVar9,lVar14);
              }
              if (lVar12 == 0) break;
              func_0x03c2a514(lVar12,lVar14,*(undefined8 *)puVar5);
              uVar13 = func_0x02ad7078(*(undefined8 *)puVar3);
              func_0x04db5c8c(uVar13,param_1,*(undefined8 *)puVar4,0);
              uVar13 = func_0x03535754(lVar12,uVar13,*(undefined8 *)PTR_DAT_063fcdf0);
              uVar17 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fce18);
              func_0x04db7a80(uVar17,param_1,*(undefined8 *)PTR_DAT_063fce30,0);
              uVar13 = func_0x03547254(uVar13,uVar17,*(undefined8 *)PTR_DAT_063fce00);
              lVar12 = func_0x0354c148(uVar13,*(undefined8 *)puVar2);
              if (lVar12 == 0) break;
              if (0 < *(int *)(lVar12 + 0x18)) {
                uVar13 = TailTarget_3b28b60(lVar12,0,*(undefined8 *)PTR_DAT_063fa420);
                Recovered_ItemMover_InteractWithBoardSlot_0x02C0594C(param_1,uVar13);
                plVar9 = *(long **)(param_1 + 0x10);
                if (*(int *)(*(long *)PTR_DAT_063f0f18 + 0xe4) == 0) {
                  func_0x02ad6f5c();
                }
                uVar16 = func_0x05c4a644(uVar13,0);
                if ((uVar16 & 1) == 0) {
                  uVar13 = *(undefined8 *)(param_1 + 0x50);
                }
                if (plVar9 != (long *)0x0) {
                  lVar12 = *plVar9;
                  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar16 == 0) goto LAB_02d05160;
                  piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  goto LAB_02d05148;
                }
                break;
              }
              lVar12 = *(long *)(param_1 + 0x68);
              if (lVar12 == 0) break;
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_02d05300;
              if (*(long *)(lVar12 + 0x20) == 0) break;
              lVar12 = func_0x034a0b10(*(long *)(lVar12 + 0x20),*(undefined8 *)PTR_DAT_063fcde8);
              if (*(int *)(*(long *)PTR_DAT_063f0f18 + 0xe4) == 0) {
                func_0x02ad6f5c(*(long *)PTR_DAT_063f0f18);
              }
              uVar16 = func_0x05c4a644(lVar12,0);
              if ((uVar16 & 1) == 0) {
                return;
              }
              if (lVar12 == 0) break;
              if (*(char *)(lVar12 + 0x70) == '\0') {
                lVar18 = func_0x034a0b10(lVar12,*(undefined8 *)PTR_DAT_063fcde0);
                if (lVar18 != 0) {
                  func_0x02dcff00(lVar18,0);
                  puVar1 = PTR_DAT_063f27e0;
                  uVar15 = *(undefined8 *)(param_1 + 0x58);
                  uVar13 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063f27e0);
                  func_0x05162528(uVar13,param_1,*(undefined8 *)PTR_DAT_063fce38,0);
                  uVar17 = func_0x02ad7078(*(undefined8 *)puVar1);
                  func_0x05162528(uVar17,param_1,*(undefined8 *)PTR_DAT_063fce40,0);
                  func_0x02dd660c(lVar12,uVar15,uVar13,uVar17,0);
                  return;
                }
                break;
              }
            }
            Recovered_ItemMover_InteractWithBoardSlot_0x02C0594C(param_1,0);
            return;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar16) {
LAB_02d05300:
                    /* WARNING: Subroutine does not return */
            BoundsThrowHelper();
          }
          *(undefined8 *)(lVar12 + uVar16 * 8 + 0x20) = 0;
          func_0x02ad6d8c(lVar12 + lVar18,0);
          lVar12 = *(long *)(param_1 + 0x68);
          uVar16 = uVar16 + 1;
          lVar18 = lVar18 + 8;
        } while (lVar12 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar11 = piVar11 + 4;
    if (uVar16 == 0) break;
LAB_02d05148:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_063f9ed8) {
      puVar10 = (undefined8 *)(lVar12 + (long)(*piVar11 + 2) * 0x10 + 0x138);
      goto LAB_02d0520c;
    }
  }
LAB_02d05160:
  puVar10 = (undefined8 *)func_0x02b0e364(plVar9,*(long *)PTR_DAT_063f9ed8,2);
LAB_02d0520c:
                    /* WARNING: Could not recover jumptable at 0x02d05234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(plVar9,uVar13,puVar10[1]);
  return;
}

