/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8AA2C; Merger.MergeBoard.Logic.BoardOperations.BoardExpendOperationDataCreator.CreateOperationData; status ok */


/* WARNING: Removing unreachable block (ram,0x06b8b558) */
/* WARNING: Removing unreachable block (ram,0x06b8b62c) */
/* WARNING: Removing unreachable block (ram,0x06b8b640) */
/* WARNING: Removing unreachable block (ram,0x06b8b650) */
/* WARNING: Removing unreachable block (ram,0x06b8b658) */
/* WARNING: Removing unreachable block (ram,0x06b8b680) */
/* WARNING: Removing unreachable block (ram,0x06b8b664) */
/* WARNING: Removing unreachable block (ram,0x06b8b670) */
/* WARNING: Removing unreachable block (ram,0x06b8b68c) */
/* WARNING: Removing unreachable block (ram,0x06b8b698) */
/* WARNING: Removing unreachable block (ram,0x06b8b614) */
/* WARNING: Removing unreachable block (ram,0x06b8b628) */
/* WARNING: Removing unreachable block (ram,0x06b8b0e0) */
/* WARNING: Removing unreachable block (ram,0x06b8ae2c) */

void Merger_MergeBoard_Logic_BoardOperations_BoardExpendOperationDataCreator__CreateOperationData
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *unaff_x22;
  undefined8 uVar12;
  long *unaff_x24;
  undefined1 auVar13 [12];
  
  plVar11 = (long *)0x7e2a000;
  if ((bRam0000000007e2a7b9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831e20);
    func_0x03280a18(PTR_DAT_07831e28);
    func_0x03280a18(PTR_DAT_07831e30);
    func_0x03280a18(PTR_DAT_07831e38);
    func_0x03280a18(PTR_DAT_078304b0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0782fd50);
    func_0x03280a18(PTR_DAT_07831e40);
    func_0x03280a18(PTR_DAT_07831e48);
    func_0x03280a18(PTR_DAT_0782fd58);
    func_0x03280a18(PTR_DAT_07831e50);
    func_0x03280a18(PTR_DAT_07831e58);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07831e60);
    func_0x03280a18(PTR_DAT_0782fce0);
    func_0x03280a18(PTR_DAT_07831e68);
    func_0x03280a18(PTR_DAT_07831e70);
    func_0x03280a18(PTR_DAT_07831e78);
    func_0x03280a18(PTR_DAT_07831e80);
    bRam0000000007e2a7b9 = 1;
  }
  puVar2 = PTR_DAT_07831e80;
  if (param_2 != (long *)0x0) {
    plVar11 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07831e68);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c(lVar7);
      lVar7 = *(long *)puVar2;
    }
    unaff_x24 = (long *)PTR_DAT_07831e28;
    unaff_x22 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
    if (unaff_x22 == (long *)0x0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c(lVar7);
        lVar7 = *(long *)puVar2;
      }
      uVar12 = **(undefined8 **)(lVar7 + 0xb8);
      unaff_x22 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07831e30);
      func_0x05355fbc(unaff_x22,uVar12,*(undefined8 *)PTR_DAT_07831e70,0);
      puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar5 = unaff_x22;
      func_0x032809c4(puVar5,unaff_x22);
    }
    plVar6 = (long *)func_0x03d872a8(plVar11,unaff_x22,*unaff_x24);
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07831e40) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8ac5c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07831e40,0);
LAB_06b8ac5c:
      unaff_x24 = (long *)PTR_DAT_0774e8c8;
      plVar11 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
      puVar4 = PTR_DAT_07831e50;
      puVar3 = PTR_DAT_078304b0;
      puVar1 = PTR_DAT_0774e8e0;
      if (plVar11 == (long *)0x0) goto LAB_06b8b480;
LAB_06b8ac90:
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8acdc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar1,0);
LAB_06b8acdc:
      uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_06b8ae20;
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_06b8adf8;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_06b8ade0;
      }
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8ad38;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar4,0);
LAB_06b8ad38:
      lVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if (lVar7 != 0) {
        unaff_x22 = *(long **)(param_1 + 0x10);
        if (unaff_x22 == (long *)0x0) goto LAB_06b8b45c;
        lVar8 = *unaff_x22;
        uVar12 = *(undefined8 *)(lVar7 + 0x10);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_06b8ada4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(unaff_x22,*(long *)puVar3,1);
LAB_06b8ada4:
        (*(code *)*puVar5)(unaff_x22,uVar12,0,puVar5[1]);
        goto LAB_06b8ac90;
      }
      func_0x03280cac();
LAB_06b8b45c:
      func_0x03280cac();
LAB_06b8b460:
      func_0x03280cac();
LAB_06b8b464:
      func_0x03280cac();
LAB_06b8b468:
      func_0x03280cac();
LAB_06b8b46c:
      func_0x03280cac();
LAB_06b8b470:
      func_0x03280cac();
    }
  }
  goto LAB_06b8b474;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_06b8ade0:
    if (*(long *)(piVar10 + -2) == *unaff_x24) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06b8ae14;
    }
  }
LAB_06b8adf8:
  puVar5 = (undefined8 *)func_0x03256b10(plVar11,*unaff_x24,0);
LAB_06b8ae14:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
LAB_06b8ae20:
  unaff_x22 = (long *)0x0;
  plVar6 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07831e60);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07831e48) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06b8aea0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07831e48,0);
LAB_06b8aea0:
    plVar11 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar4 = PTR_DAT_07831e58;
    puVar3 = PTR_DAT_078304b0;
    puVar1 = PTR_DAT_0774e8e0;
    if (plVar11 == (long *)0x0) goto LAB_06b8b484;
LAB_06b8aecc:
    do {
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8af18;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar1,0);
LAB_06b8af18:
      uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        unaff_x22 = (long *)0x0;
        if (plVar11 == (long *)0x0) goto LAB_06b8b0d4;
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_06b8b0ac;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_06b8b094;
      }
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8af74;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar4,0);
LAB_06b8af74:
      lVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if (lVar7 == 0) goto LAB_06b8b460;
      unaff_x22 = *(long **)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x1c) < 1) {
        if (unaff_x22 == (long *)0x0) goto LAB_06b8b470;
        lVar8 = *unaff_x22;
        lVar7 = *(long *)puVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_06b8b058;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(unaff_x22,lVar7,1);
LAB_06b8b058:
        (*(code *)*puVar5)(unaff_x22,uVar12,0,puVar5[1]);
        goto LAB_06b8aecc;
      }
      if (unaff_x22 == (long *)0x0) goto LAB_06b8b46c;
      lVar8 = *unaff_x22;
      lVar7 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_06b8b030;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(unaff_x22,lVar7,2);
LAB_06b8b030:
      (*(code *)*puVar5)(unaff_x22,uVar12,0,puVar5[1]);
    } while( true );
  }
  goto LAB_06b8b474;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_06b8b514:
    if (*(long *)(piVar10 + -2) == *unaff_x24) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06b8b548;
    }
  }
LAB_06b8b52c:
  puVar5 = (undefined8 *)func_0x03256b10(param_2,*unaff_x24,0);
LAB_06b8b548:
  (*(code *)*puVar5)(param_2,puVar5[1]);
LAB_06b8b554:
  func_0x03365958(auVar13._0_8_);
  func_0x03280ca4(unaff_x22);
  func_0x02f09514();
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_06b8b094:
    if (*(long *)(piVar10 + -2) == *unaff_x24) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06b8b0c8;
    }
  }
LAB_06b8b0ac:
  puVar5 = (undefined8 *)func_0x03256b10(plVar11,*unaff_x24,0);
LAB_06b8b0c8:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
LAB_06b8b0d4:
  param_2 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_0782fce0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c(lVar7);
    lVar7 = *(long *)puVar2;
  }
  plVar11 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (plVar11 == (long *)0x0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c(lVar7);
      lVar7 = *(long *)puVar2;
    }
    unaff_x22 = (long *)**(undefined8 **)(lVar7 + 0xb8);
    plVar11 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07831e38);
    func_0x05355fbc(plVar11,unaff_x22,*(undefined8 *)PTR_DAT_07831e78,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar6 = (long)plVar11;
    func_0x032809c4(plVar6,plVar11);
  }
  plVar6 = (long *)func_0x03d872a8(param_2,plVar11,*(undefined8 *)PTR_DAT_07831e20);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0782fd50) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06b8b1f0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0782fd50,0);
LAB_06b8b1f0:
    param_2 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar3 = PTR_DAT_078304b0;
    puVar1 = PTR_DAT_0782fd58;
    puVar2 = PTR_DAT_0774e8e0;
    if (param_2 == (long *)0x0) goto LAB_06b8b488;
    do {
      lVar7 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8b268;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar2,0);
LAB_06b8b268:
      uVar9 = (*(code *)*puVar5)(param_2,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        plVar11 = (long *)0x0;
        unaff_x22 = (long *)0xd;
        goto joined_r0x06b8b34c;
      }
      lVar7 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8b2c4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b8b2c4:
      lVar7 = (*(code *)*puVar5)(param_2,puVar5[1]);
      if (lVar7 == 0) goto LAB_06b8b464;
      plVar11 = *(long **)(param_1 + 0x10);
      if (plVar11 == (long *)0x0) goto LAB_06b8b468;
      lVar8 = *plVar11;
      unaff_x22 = *(long **)(lVar7 + 0x18);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06b8b32c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar3,0);
LAB_06b8b32c:
      (*(code *)*puVar5)(plVar11,unaff_x22,0,puVar5[1]);
    } while( true );
  }
LAB_06b8b474:
  do {
    func_0x03280cac();
    func_0x03280ca4(unaff_x22);
LAB_06b8b480:
    func_0x03280cac();
LAB_06b8b484:
    func_0x03280cac();
LAB_06b8b488:
    func_0x03280cac();
    do {
      auVar13 = func_0x03280ca4(plVar11);
      if (auVar13._8_4_ != 1) {
        if (param_2 == (long *)0x0) goto LAB_06b8b554;
        lVar7 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_06b8b52c;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_06b8b514;
      }
      plVar11 = (long *)func_0x072ce910(auVar13._0_8_);
      plVar11 = (long *)*plVar11;
      func_0x072ce920();
      unaff_x22 = (long *)0x0;
joined_r0x06b8b34c:
      if (param_2 != (long *)0x0) {
        lVar7 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x24) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06b8b39c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(param_2,*unaff_x24,0);
LAB_06b8b39c:
        (*(code *)*puVar5)(param_2,puVar5[1]);
      }
    } while (plVar11 != (long *)0x0);
    if (((int)unaff_x22 != 0xd) && ((int)unaff_x22 != 0)) {
      return;
    }
    plVar6 = *(long **)(param_1 + 0x10);
    param_1 = 0;
  } while (plVar6 == (long *)0x0);
  lVar7 = *plVar6;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_078304b0) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_06b8b434;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_078304b0,4);
LAB_06b8b434:
                    /* WARNING: Could not recover jumptable at 0x06b8b454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}

