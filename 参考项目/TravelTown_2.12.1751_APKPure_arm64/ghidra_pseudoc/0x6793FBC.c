/* Ghidra 12.1.2 native pseudocode; RVA 0x6793FBC; MergeEngine.ECS.Systems.Items.TimeCycleSystem.ProcessCycle; status ok */


/* WARNING: Possible PIC construction at 0x06892f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06892f7c) */
/* WARNING: Removing unreachable block (ram,0x06892f8c) */
/* WARNING: Removing unreachable block (ram,0x06892f94) */
/* WARNING: Removing unreachable block (ram,0x06892fbc) */
/* WARNING: Removing unreachable block (ram,0x06892fa0) */
/* WARNING: Removing unreachable block (ram,0x06892fac) */
/* WARNING: Removing unreachable block (ram,0x06892fcc) */
/* WARNING: Removing unreachable block (ram,0x06892fec) */
/* WARNING: Removing unreachable block (ram,0x06892ff4) */
/* WARNING: Removing unreachable block (ram,0x0689301c) */
/* WARNING: Removing unreachable block (ram,0x06893000) */
/* WARNING: Removing unreachable block (ram,0x0689300c) */
/* WARNING: Removing unreachable block (ram,0x0689302c) */

ulong MergeEngine_ECS_Systems_Items_TimeCycleSystem__ProcessCycle
                (double param_1,long param_2,long *param_3,undefined8 param_4,long *param_5,
                long *param_6,long *param_7)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *extraout_x1;
  long *extraout_x1_00;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar22;
  long *unaff_x21;
  long *plVar23;
  long *unaff_x22;
  long *plVar24;
  long *plVar25;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined8 uVar26;
  code *unaff_x30;
  double dVar27;
  undefined8 uVar28;
  double extraout_d0;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  double unaff_d8;
  double unaff_d9;
  undefined1 auVar34 [16];
  
  do {
    *(double *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(double *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(code **)((long)register0x00000008 + -0x30) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    plVar13 = param_5;
    unaff_x22 = param_6;
    unaff_x21 = param_7;
    if ((bRam0000000007e28d76 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a600);
      func_0x03280a18(PTR_DAT_0774ee08);
      bRam0000000007e28d76 = 1;
      plVar13 = param_5;
      unaff_x22 = param_6;
      unaff_x21 = param_7;
    }
    puVar4 = PTR_DAT_0777a600;
    if (param_3 == (long *)0x0) {
      uVar20 = func_0x03280cac();
      puVar4 = PTR_DAT_078105b0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0x689456c;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0x7e28000;
      *(long *)((long)register0x00000008 + -0x50) = param_2;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      if ((bRam0000000007e28d78 & 1) == 0) {
        func_0x03280a18(PTR_DAT_078105b0);
        bRam0000000007e28d78 = 1;
      }
      uVar26 = *(undefined8 *)puVar4;
      return uVar20;
    }
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a600) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_06894060;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a600,1);
LAB_06894060:
    iVar9 = (*(code *)*puVar16)(param_3,puVar16[1]);
    if (iVar9 == 0) {
      lVar19 = *param_3;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 10) * 0x10 + 0x138);
            goto LAB_06894540;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,10);
LAB_06894540:
      uVar20 = (*(code *)*puVar16)(param_3,puVar16[1]);
      if (0 < (int)uVar20) {
        return uVar20;
      }
    }
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 10) * 0x10 + 0x138);
          goto LAB_06894100;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,10);
LAB_06894100:
    iVar9 = (*(code *)*puVar16)(param_3,puVar16[1]);
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0689415c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0);
LAB_0689415c:
    iVar10 = (*(code *)*puVar16)(param_3,puVar16[1]);
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xb) * 0x10 + 0x138);
          goto LAB_068941bc;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0xb);
LAB_068941bc:
    (*(code *)*puVar16)(param_3,iVar10 + iVar9,puVar16[1]);
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 10) * 0x10 + 0x138);
          goto LAB_0689421c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,10);
LAB_0689421c:
    puVar3 = PTR_DAT_0774ee08;
    uVar11 = (*(code *)*puVar16)(param_3,puVar16[1]);
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xe) * 0x10 + 0x138);
          goto LAB_06894284;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0xe);
LAB_06894284:
    uVar12 = (*(code *)*puVar16)(param_3,puVar16[1]);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar3);
    }
    uVar11 = func_0x05797580(uVar11,uVar12,0);
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xb) * 0x10 + 0x138);
          goto LAB_0689430c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0xb);
LAB_0689430c:
    plVar17 = (long *)puVar16[1];
    (*(code *)*puVar16)(param_3,uVar11);
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_0689436c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    plVar17 = (long *)0x1;
    puVar16 = (undefined8 *)func_0x03256b10(param_3);
LAB_0689436c:
    iVar9 = (*(code *)*puVar16)(param_3,puVar16[1]);
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_068943cc;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    plVar17 = (long *)0x7;
    puVar16 = (undefined8 *)func_0x03256b10(param_3);
LAB_068943cc:
    (*(code *)*puVar16)((double)iVar9,param_3,puVar16[1]);
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 10) * 0x10 + 0x138);
          goto LAB_0689442c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    plVar17 = (long *)0xa;
    puVar16 = (undefined8 *)func_0x03256b10(param_3);
LAB_0689442c:
    iVar9 = (*(code *)*puVar16)(param_3,puVar16[1]);
    lVar19 = *param_3;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xe) * 0x10 + 0x138);
          goto LAB_0689448c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    plVar17 = (long *)0xe;
    puVar16 = (undefined8 *)func_0x03256b10(param_3);
LAB_0689448c:
    iVar10 = (*(code *)*puVar16)(param_3,puVar16[1]);
    if (iVar10 <= iVar9) {
      lVar19 = *param_3;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 == 0) goto LAB_068944f0;
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      break;
    }
    plVar23 = *(long **)((long)register0x00000008 + -0x20);
    plVar24 = *(long **)((long)register0x00000008 + -0x28);
    unaff_d9 = *(double *)((long)register0x00000008 + -0x40);
    *(double *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x28) = plVar24;
    *(long **)((long)register0x00000008 + -0x20) = plVar23;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if ((bRam0000000007e28d74 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07810570);
      func_0x03280a18(PTR_DAT_0777e5a8);
      func_0x03280a18(PTR_DAT_07810578);
      func_0x03280a18(PTR_DAT_07810580);
      func_0x03280a18(PTR_DAT_0777e498);
      func_0x03280a18(PTR_DAT_07809778);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0777e4a0);
      func_0x03280a18(PTR_DAT_0777a600);
      func_0x03280a18(PTR_DAT_077512a8);
      func_0x03280a18(PTR_DAT_07751420);
      func_0x03280a18(PTR_DAT_07810588);
      func_0x03280a18(PTR_DAT_07778fa0);
      bRam0000000007e28d74 = 1;
    }
    puVar4 = PTR_DAT_0777a600;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
    plVar22 = (long *)0x7e28000;
    if (param_3 == (long *)0x0) {
LAB_06893784:
      uVar26 = 0x6893788;
      auVar34 = func_0x03280cac();
      unaff_d8 = param_1;
    }
    else {
      lVar19 = *param_3;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a600) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xc) * 0x10 + 0x138);
            goto LAB_068928c4;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a600,0xc);
LAB_068928c4:
      iVar9 = (*(code *)*puVar16)(param_3,puVar16[1]);
      lVar19 = *param_3;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_06892920;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0);
LAB_06892920:
      iVar6 = (*(code *)*puVar16)(param_3,puVar16[1]);
      lVar19 = *param_3;
      iVar10 = 0;
      if (iVar6 != 0) {
        iVar10 = iVar9 / iVar6;
      }
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 9) * 0x10 + 0x138);
            goto LAB_06892980;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,9);
LAB_06892980:
      (*(code *)*puVar16)(param_3,iVar10,puVar16[1]);
      lVar19 = *param_3;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 8) * 0x10 + 0x138);
            goto LAB_068929e0;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,8);
LAB_068929e0:
      iVar9 = (*(code *)*puVar16)(param_3,puVar16[1]);
      lVar19 = *param_3;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 2) * 0x10 + 0x138);
            goto LAB_06892a40;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,2);
LAB_06892a40:
      iVar10 = (*(code *)*puVar16)(param_3,puVar16[1]);
      if (iVar10 <= iVar9) {
        lVar19 = *param_3;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 3) * 0x10 + 0x138);
              goto LAB_06892aa4;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,3);
LAB_06892aa4:
        iVar9 = (*(code *)*puVar16)(param_3,puVar16[1]);
        if (0 < iVar9) {
          lVar19 = *param_3;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar20 == 0) goto LAB_06892ae8;
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto LAB_06892ad0;
        }
      }
      func_0x060d57ac((undefined1 *)((long)register0x00000008 + -0xd0),param_3,0);
      lVar19 = *param_3;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xf) * 0x10 + 0x138);
            goto LAB_06892b58;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0xf);
LAB_06892b58:
      uVar7 = (*(code *)*puVar16)(param_3,puVar16[1]);
      lVar19 = *param_3;
      plVar22 = (long *)(ulong)uVar7;
      auVar34._8_4_ = uVar7;
      auVar34._0_8_ = param_2;
      auVar34._12_4_ = 0;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 6) * 0x10 + 0x138);
            goto LAB_06892bb8;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,6);
LAB_06892bb8:
      dVar27 = (double)(*(code *)*puVar16)(param_3,puVar16[1]);
      lVar18 = *param_3;
      lVar19 = *(long *)puVar4;
      uVar2 = *(ushort *)(lVar18 + 0x12e);
      uVar20 = (ulong)uVar2;
      unaff_x24 = (long *)puVar4;
      if (dVar27 <= param_1) {
        if (uVar2 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar19) {
              puVar16 = (undefined8 *)(lVar18 + (long)(*piVar21 + 6) * 0x10 + 0x138);
              goto LAB_06892cb8;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)func_0x03256b10(param_3,lVar19,6);
LAB_06892cb8:
        unaff_d9 = (double)(*(code *)*puVar16)(param_3,puVar16[1]);
        lVar19 = *param_3;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_06892d78;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,7);
LAB_06892d78:
        (*(code *)*puVar16)(0,param_3,puVar16[1]);
        lVar19 = *param_3;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 10) * 0x10 + 0x138);
              goto LAB_06892e48;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,10);
LAB_06892e48:
        param_1 = param_1 - unaff_d9;
        uVar26 = (*(code *)*puVar16)(param_3,puVar16[1]);
        if ((int)uVar26 == 0) {
          uVar8 = MergeEngine_ECS_Systems_Items_TimeCycleSystem__SkipCooldownEntirely
                            (uVar26,param_3);
          plVar23 = (long *)(ulong)(~uVar8 & 1);
        }
        else {
          plVar23 = (long *)0x0;
        }
        MergeEngine_ECS_Systems_Items_TimeCycleSystem__ProcessCycle(param_1,param_2,param_3);
        lVar19 = *param_3;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xf) * 0x10 + 0x138);
              goto LAB_06892ed4;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0xf);
LAB_06892ed4:
        uVar20 = (*(code *)*puVar16)(param_3,puVar16[1]);
        bVar5 = false;
        if (uVar7 != (uint)uVar20) {
          lVar19 = *param_3;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
                puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xf) * 0x10 + 0x138);
                goto LAB_068931a4;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0xf);
LAB_068931a4:
          uVar20 = (*(code *)*puVar16)(param_3,puVar16[1]);
          bVar5 = (int)uVar20 == 3;
        }
        if (!bVar5 && (int)plVar23 == 0) {
          return uVar20;
        }
        lVar19 = *param_3;
        plVar22 = *(long **)PTR_DAT_0777e5a8;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        plVar17 = (long *)(ulong)*(ushort *)(plVar22 + 10);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == plVar22[4]) {
              lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(plVar22 + 10)) * 0x10 +
                       0x138;
              goto LAB_06893220;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        lVar19 = func_0x03256b10(param_3);
LAB_06893220:
        lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),plVar22);
        lVar19 = (**(code **)(lVar19 + 8))(param_3,lVar19);
        puVar4 = PTR_DAT_0777e498;
        if (lVar19 != 0) {
          lVar18 = *param_3;
          plVar22 = *(long **)(lVar19 + 0x38);
          uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e498) {
                puVar16 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_06893298;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777e498,0);
LAB_06893298:
          uVar26 = (*(code *)*puVar16)(param_3,puVar16[1]);
          plVar17 = (long *)0x0;
          uVar20 = func_0x064a73dc(param_2,uVar26);
          unaff_x27 = puVar4;
          if ((uVar20 & 1) == 0) {
            lVar19 = *param_3;
            plVar23 = *(long **)PTR_DAT_07810578;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
            plVar17 = (long *)(ulong)*(ushort *)(plVar23 + 10);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == plVar23[4]) {
                  lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(plVar23 + 10)) * 0x10 +
                           0x138;
                  goto LAB_06893314;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            lVar19 = func_0x03256b10(param_3);
LAB_06893314:
            lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),plVar23);
            unaff_x24 = (long *)(**(code **)(lVar19 + 8))(param_3,lVar19);
            if (unaff_x24 == (long *)0x0) {
              lVar19 = *param_3;
              plVar23 = *(long **)PTR_DAT_07810580;
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
              plVar17 = (long *)(ulong)*(ushort *)(plVar23 + 10);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == plVar23[4]) {
                    lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(plVar23 + 10)) * 0x10
                             + 0x138;
                    goto LAB_06893394;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              lVar19 = func_0x03256b10(param_3);
LAB_06893394:
              lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),plVar23);
              unaff_x24 = (long *)(**(code **)(lVar19 + 8))(param_3,lVar19);
            }
            plVar24 = *(long **)(param_2 + 0x68);
            if (plVar24 != (long *)0x0) {
              lVar19 = *plVar24;
              plVar23 = *(long **)(param_2 + 0x28);
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x14) * 0x10 + 0x138);
                    goto LAB_06893418;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar16 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0777a498,0x14);
LAB_06893418:
              plVar17 = (long *)puVar16[1];
              plVar14 = (long *)(*(code *)*puVar16)(plVar24,param_3);
              if (*(long *)(param_2 + 0x50) != 0) {
                uVar20 = func_0x067675f0(*(long *)(param_2 + 0x50),0);
                unaff_x25 = (long *)(uVar20 & 0xffffffff);
                *(undefined8 *)((long)register0x00000008 + -0x98) =
                     *(undefined8 *)((long)register0x00000008 + -200);
                *(undefined8 *)((long)register0x00000008 + -0xa0) =
                     *(undefined8 *)((long)register0x00000008 + -0xd0);
                *(undefined8 *)((long)register0x00000008 + -0x88) =
                     *(undefined8 *)((long)register0x00000008 + -0xb8);
                *(undefined8 *)((long)register0x00000008 + -0x90) =
                     *(undefined8 *)((long)register0x00000008 + -0xc0);
                *(undefined8 *)((long)register0x00000008 + -0x80) =
                     *(undefined8 *)((long)register0x00000008 + -0xb0);
                if (unaff_x24 == (long *)0x0) {
                  uVar29 = *(undefined8 *)((long)register0x00000008 + -0x98);
                  uVar28 = *(undefined8 *)((long)register0x00000008 + -0xa0);
                  uVar32 = *(undefined8 *)((long)register0x00000008 + -0x88);
                  uVar30 = *(undefined8 *)((long)register0x00000008 + -0x90);
                  uVar26 = *(undefined8 *)((long)register0x00000008 + -0x80);
                  *(undefined8 *)((long)register0x00000008 + -0x128) = uVar29;
                  *(undefined8 *)((long)register0x00000008 + -0x130) = uVar28;
                  *(undefined8 *)((long)register0x00000008 + -0x118) = uVar32;
                  *(undefined8 *)((long)register0x00000008 + -0x120) = uVar30;
                  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar26;
                }
                else {
                  *(undefined8 *)((long)register0x00000008 + -0xf8) =
                       *(undefined8 *)((long)register0x00000008 + -0x98);
                  *(undefined8 *)((long)register0x00000008 + -0x100) =
                       *(undefined8 *)((long)register0x00000008 + -0xa0);
                  *(undefined8 *)((long)register0x00000008 + -0xe8) =
                       *(undefined8 *)((long)register0x00000008 + -0x88);
                  *(undefined8 *)((long)register0x00000008 + -0xf0) =
                       *(undefined8 *)((long)register0x00000008 + -0x90);
                  *(undefined8 *)((long)register0x00000008 + -0xe0) =
                       *(undefined8 *)((long)register0x00000008 + -0x80);
                  lVar19 = *unaff_x24;
                  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar20 != 0) {
                    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_07809778) {
                        puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                        goto LAB_068934d4;
                      }
                      uVar20 = uVar20 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar16 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)PTR_DAT_07809778,4);
LAB_068934d4:
                  lVar19 = (*(code *)*puVar16)(unaff_x24,puVar16[1]);
                  if (lVar19 == 0) {
                    uVar29 = *(undefined8 *)((long)register0x00000008 + -0xf8);
                    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x100);
                    uVar32 = *(undefined8 *)((long)register0x00000008 + -0xe8);
                    uVar30 = *(undefined8 *)((long)register0x00000008 + -0xf0);
                    uVar26 = *(undefined8 *)((long)register0x00000008 + -0xe0);
                    unaff_x24 = (long *)0x0;
                  }
                  else {
                    uVar1 = *(undefined1 *)(lVar19 + 0x10);
                    *(undefined2 *)((long)register0x00000008 + -0xa0) = 0;
                    func_0x04377614((undefined1 *)((long)register0x00000008 + -0xa0),uVar1,
                                    *(undefined8 *)PTR_DAT_07751420);
                    uVar29 = *(undefined8 *)((long)register0x00000008 + -0xf8);
                    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x100);
                    uVar32 = *(undefined8 *)((long)register0x00000008 + -0xe8);
                    uVar30 = *(undefined8 *)((long)register0x00000008 + -0xf0);
                    uVar26 = *(undefined8 *)((long)register0x00000008 + -0xe0);
                    unaff_x24 = (long *)(ulong)(0xff < *(ushort *)((long)register0x00000008 + -0xa0)
                                               );
                  }
                }
                *(undefined8 *)((long)register0x00000008 + -0x158) = uVar29;
                *(undefined8 *)((long)register0x00000008 + -0x160) = uVar28;
                *(undefined8 *)((long)register0x00000008 + -0x148) = uVar32;
                *(undefined8 *)((long)register0x00000008 + -0x150) = uVar30;
                *(undefined8 *)((long)register0x00000008 + -0x140) = uVar26;
                unaff_x26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07810570);
                plVar13 = (long *)((long)register0x00000008 + -0xa0);
                unaff_x21 = (long *)((ulong)unaff_x24 & 0xffffffff);
                *(undefined8 *)((long)register0x00000008 + -0x98) =
                     *(undefined8 *)((long)register0x00000008 + -0x158);
                *(undefined8 *)((long)register0x00000008 + -0xa0) =
                     *(undefined8 *)((long)register0x00000008 + -0x160);
                *(undefined8 *)((long)register0x00000008 + -0x88) =
                     *(undefined8 *)((long)register0x00000008 + -0x148);
                *(undefined8 *)((long)register0x00000008 + -0x90) =
                     *(undefined8 *)((long)register0x00000008 + -0x150);
                *(undefined8 *)((long)register0x00000008 + -0x80) =
                     *(undefined8 *)((long)register0x00000008 + -0x140);
                plVar17 = unaff_x25;
                unaff_x22 = plVar22;
                func_0x0686a7d0(unaff_x26,plVar14);
                plVar24 = plVar14;
                if (plVar23 != (long *)0x0) {
                  plVar17 = *(long **)PTR_DAT_07810588;
                  func_0x03ea4d6c(plVar23,unaff_x26);
                  goto LAB_0689358c;
                }
              }
            }
          }
          else {
LAB_0689358c:
            lVar19 = *param_3;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
                  puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_068935d8;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            plVar17 = (long *)0x0;
            puVar16 = (undefined8 *)func_0x03256b10(param_3);
LAB_068935d8:
            uVar26 = (*(code *)*puVar16)(param_3,puVar16[1]);
            plVar14 = (long *)func_0x06389f5c(uVar26,0);
            plVar25 = *(long **)(param_2 + 0x68);
            plVar24 = (long *)0x0;
            if (plVar25 != (long *)0x0) {
              lVar19 = *plVar25;
              plVar23 = *(long **)(param_2 + 0x60);
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x14) * 0x10 + 0x138);
                    goto LAB_06893654;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar16 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_0777a498,0x14);
LAB_06893654:
              plVar17 = (long *)puVar16[1];
              plVar24 = (long *)(*(code *)*puVar16)(plVar25,param_3);
              lVar19 = *param_3;
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
                    puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_068936b4;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              plVar17 = (long *)0x0;
              puVar16 = (undefined8 *)func_0x03256b10(param_3);
LAB_068936b4:
              plVar25 = (long *)(*(code *)*puVar16)(param_3,puVar16[1]);
              plVar22 = plVar14;
              if (plVar23 != (long *)0x0) {
                lVar19 = *plVar23;
                uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
                unaff_x24 = *(long **)PTR_DAT_07778fa0;
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e4a0) {
                      puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                      goto LAB_06893728;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                puVar16 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777e4a0,0);
LAB_06893728:
                unaff_x21 = (long *)puVar16[1];
                plVar17 = plVar24;
                plVar13 = plVar25;
                unaff_x22 = plVar14;
                uVar26 = (*(code *)*puVar16)(plVar23,unaff_x24);
                param_3 = plVar25;
                if (*(long *)(param_2 + 0x40) != 0) {
                  uVar20 = func_0x068b94a0(*(long *)(param_2 + 0x40),uVar26,0,0);
                  return uVar20;
                }
              }
            }
          }
        }
        goto LAB_06893784;
      }
      if (uVar2 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar19) {
            puVar16 = (undefined8 *)(lVar18 + (long)(*piVar21 + 10) * 0x10 + 0x138);
            goto LAB_06892c50;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,lVar19,10);
LAB_06892c50:
      iVar9 = (*(code *)*puVar16)(param_3,puVar16[1]);
      lVar19 = *param_3;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      uVar7 = 1;
      if (0 < iVar9) {
        uVar7 = 2;
      }
      plVar23 = (long *)(ulong)uVar7;
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x10) * 0x10 + 0x138);
            goto LAB_06892d18;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0x10);
LAB_06892d18:
      plVar17 = (long *)puVar16[1];
      (*(code *)*puVar16)(param_3,plVar23);
      lVar19 = *param_3;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xf) * 0x10 + 0x138);
            goto LAB_06892dd8;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      plVar17 = (long *)0xf;
      puVar16 = (undefined8 *)func_0x03256b10(param_3);
LAB_06892dd8:
      uVar20 = (*(code *)*puVar16)(param_3,puVar16[1]);
      plVar24 = *(long **)(param_2 + 0x68);
      if (plVar24 == (long *)0x0) goto LAB_06893784;
      lVar19 = *plVar24;
      plVar17 = (long *)(uVar20 & 0xffffffff);
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x14) * 0x10 + 0x138);
            goto LAB_06892f40;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0777a498,0x14);
LAB_06892f40:
      plVar13 = (long *)(*(code *)*puVar16)(plVar24,param_3,puVar16[1]);
      *(undefined8 *)((long)register0x00000008 + -0x188) =
           *(undefined8 *)((long)register0x00000008 + -200);
      *(undefined8 *)((long)register0x00000008 + -400) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -0x178) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0x180) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0x170) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      uVar26 = 0x6892f7c;
      unaff_x22 = (long *)((long)register0x00000008 + -400);
      unaff_x21 = param_3;
      plVar23 = plVar17;
      unaff_d8 = param_1;
    }
    uVar20 = auVar34._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x1f0) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar26;
    *(undefined **)((long)register0x00000008 + -0x1e0) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x1d8) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x1d0) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x1c8) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x1c0) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x1b8) = plVar24;
    *(long **)((long)register0x00000008 + -0x1b0) = plVar23;
    *(long **)((long)register0x00000008 + -0x1a8) = plVar22;
    *(long *)((long)register0x00000008 + -0x1a0) = param_2;
    *(long **)((long)register0x00000008 + -0x198) = param_3;
    unaff_x25 = (long *)0x7e28000;
    unaff_x23 = (long *)((ulong)plVar17 & 0xffffffff);
    unaff_x24 = (long *)(auVar34._8_8_ & 0xffffffff);
    uVar15 = uVar20;
    param_5 = plVar13;
    param_6 = unaff_x22;
    param_7 = unaff_x21;
    if ((bRam0000000007e28d77 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07810590);
      func_0x03280a18(PTR_DAT_07810598);
      func_0x03280a18(PTR_DAT_0777e5a8);
      func_0x03280a18(PTR_DAT_07810578);
      func_0x03280a18(PTR_DAT_07810580);
      func_0x03280a18(PTR_DAT_077e6600);
      func_0x03280a18(PTR_DAT_0777e498);
      func_0x03280a18(PTR_DAT_07809778);
      func_0x03280a18(PTR_DAT_0777e4a0);
      func_0x03280a18(PTR_DAT_077512a8);
      func_0x03280a18(PTR_DAT_07751420);
      func_0x03280a18(PTR_DAT_078105a0);
      func_0x03280a18(PTR_DAT_078105a8);
      uVar15 = func_0x03280a18(PTR_DAT_07778fa0);
      bRam0000000007e28d77 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x290) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x298) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
    if (auVar34._8_4_ < 2) {
      if (((uint)plVar17 & 0xfffffffe) != 2) {
        return uVar15;
      }
      lVar19 = *(long *)(uVar20 + 0x28);
      plVar13 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07810598);
      func_0x0688cf40(plVar13,0);
      uVar20 = 0;
      if (lVar19 != 0) {
        uVar20 = func_0x03ea4d6c(lVar19,plVar13,*(undefined8 *)PTR_DAT_078105a8);
        return uVar20;
      }
    }
    else {
      if (1 < auVar34._8_4_ - 2) {
        return uVar15;
      }
      if (1 < (uint)plVar17) {
        return uVar15;
      }
      if (unaff_x21 != (long *)0x0) {
        lVar19 = *unaff_x21;
        lVar18 = *(long *)PTR_DAT_0777e5a8;
        uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar15 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
              lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_06893958;
            }
            uVar15 = uVar15 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar15 != 0);
        }
        lVar19 = func_0x03256b10(unaff_x21);
LAB_06893958:
        lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar18);
        unaff_x23 = (long *)(**(code **)(lVar19 + 8))(unaff_x21,lVar19);
        lVar19 = *unaff_x21;
        lVar18 = *(long *)PTR_DAT_07810578;
        uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar15 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
              lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_068939d4;
            }
            uVar15 = uVar15 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar15 != 0);
        }
        lVar19 = func_0x03256b10(unaff_x21);
LAB_068939d4:
        lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar18);
        unaff_x24 = (long *)(**(code **)(lVar19 + 8))(unaff_x21,lVar19);
        if (unaff_x24 == (long *)0x0) {
          lVar19 = *unaff_x21;
          lVar18 = *(long *)PTR_DAT_07810580;
          uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar15 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x20)) {
                lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_06893a54;
              }
              uVar15 = uVar15 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar15 != 0);
          }
          lVar19 = func_0x03256b10(unaff_x21);
LAB_06893a54:
          lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar18);
          unaff_x24 = (long *)(**(code **)(lVar19 + 8))(unaff_x21,lVar19);
        }
        lVar19 = *unaff_x21;
        lVar18 = *(long *)(uVar20 + 0x58);
        unaff_x26 = *(long *)PTR_DAT_077e6600;
        uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar15 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)(unaff_x26 + 0x20)) {
              lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(unaff_x26 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_06893ad4;
            }
            uVar15 = uVar15 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar15 != 0);
        }
        lVar19 = func_0x03256b10(unaff_x21);
LAB_06893ad4:
        lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),unaff_x26);
        uVar26 = (**(code **)(lVar19 + 8))(unaff_x21,lVar19);
        unaff_x25 = (long *)0x0;
        if (lVar18 != 0) {
          unaff_x25 = (long *)MergeEngine_ECS_Systems_Items_SkipCooldownSystem__GetSkipCooldownPrice
                                        (lVar18,uVar26,unaff_x24);
          unaff_x28 = PTR_DAT_0777e498;
          lVar19 = *unaff_x21;
          uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar15 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e498) {
                puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_06893b5c;
              }
              uVar15 = uVar15 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar15 != 0);
          }
          puVar16 = (undefined8 *)func_0x03256b10(unaff_x21,*(long *)PTR_DAT_0777e498,0);
LAB_06893b5c:
          uVar26 = (*(code *)*puVar16)(unaff_x21,puVar16[1]);
          uVar15 = func_0x064a73dc(uVar20,uVar26,0);
          if ((uVar15 & 1) == 0) {
            unaff_x26 = *(long *)(uVar20 + 0x28);
            unaff_x27 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07810598);
            func_0x0688cf40(unaff_x27,1);
            if (((unaff_x26 != 0) &&
                (func_0x03ea4d6c(unaff_x26,unaff_x27,*(undefined8 *)PTR_DAT_078105a8),
                unaff_x23 != (long *)0x0)) && (*(long *)(uVar20 + 0x50) != 0)) {
              unaff_x26 = *(long *)(uVar20 + 0x28);
              unaff_x23 = (long *)unaff_x23[7];
              uVar15 = func_0x067675f0(*(long *)(uVar20 + 0x50),0);
              lVar33 = unaff_x22[1];
              lVar31 = *unaff_x22;
              lVar18 = unaff_x22[3];
              lVar19 = unaff_x22[2];
              unaff_x27 = (undefined *)(uVar15 & 0xffffffff);
              *(long *)((long)register0x00000008 + -0x200) = unaff_x22[4];
              *(long *)((long)register0x00000008 + -0x218) = lVar33;
              *(long *)((long)register0x00000008 + -0x220) = lVar31;
              *(long *)((long)register0x00000008 + -0x208) = lVar18;
              *(long *)((long)register0x00000008 + -0x210) = lVar19;
              if (unaff_x24 == (long *)0x0) {
                uVar29 = *(undefined8 *)((long)register0x00000008 + -0x218);
                uVar28 = *(undefined8 *)((long)register0x00000008 + -0x220);
                uVar32 = *(undefined8 *)((long)register0x00000008 + -0x208);
                uVar30 = *(undefined8 *)((long)register0x00000008 + -0x210);
                uVar26 = *(undefined8 *)((long)register0x00000008 + -0x200);
                unaff_x22 = (long *)0x0;
                *(undefined8 *)((long)register0x00000008 + -0x278) = uVar29;
                *(undefined8 *)((long)register0x00000008 + -0x280) = uVar28;
                *(undefined8 *)((long)register0x00000008 + -0x268) = uVar32;
                *(undefined8 *)((long)register0x00000008 + -0x270) = uVar30;
                *(undefined8 *)((long)register0x00000008 + -0x260) = uVar26;
              }
              else {
                *(undefined8 *)((long)register0x00000008 + -0x248) =
                     *(undefined8 *)((long)register0x00000008 + -0x218);
                *(undefined8 *)((long)register0x00000008 + -0x250) =
                     *(undefined8 *)((long)register0x00000008 + -0x220);
                *(undefined8 *)((long)register0x00000008 + -0x238) =
                     *(undefined8 *)((long)register0x00000008 + -0x208);
                *(undefined8 *)((long)register0x00000008 + -0x240) =
                     *(undefined8 *)((long)register0x00000008 + -0x210);
                *(undefined8 *)((long)register0x00000008 + -0x230) =
                     *(undefined8 *)((long)register0x00000008 + -0x200);
                lVar19 = *unaff_x24;
                uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar15 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_07809778) {
                      puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                      goto LAB_06893c6c;
                    }
                    uVar15 = uVar15 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar15 != 0);
                }
                puVar16 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)PTR_DAT_07809778,4);
LAB_06893c6c:
                lVar19 = (*(code *)*puVar16)(unaff_x24,puVar16[1]);
                if (lVar19 == 0) {
                  uVar29 = *(undefined8 *)((long)register0x00000008 + -0x248);
                  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x250);
                  uVar32 = *(undefined8 *)((long)register0x00000008 + -0x238);
                  uVar30 = *(undefined8 *)((long)register0x00000008 + -0x240);
                  uVar26 = *(undefined8 *)((long)register0x00000008 + -0x230);
                  unaff_x22 = (long *)0x0;
                }
                else {
                  uVar1 = *(undefined1 *)(lVar19 + 0x10);
                  *(undefined2 *)((long)register0x00000008 + -0x220) = 0;
                  func_0x04377614((undefined1 *)((long)register0x00000008 + -0x220),uVar1,
                                  *(undefined8 *)PTR_DAT_07751420);
                  uVar29 = *(undefined8 *)((long)register0x00000008 + -0x248);
                  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x250);
                  uVar32 = *(undefined8 *)((long)register0x00000008 + -0x238);
                  uVar30 = *(undefined8 *)((long)register0x00000008 + -0x240);
                  uVar26 = *(undefined8 *)((long)register0x00000008 + -0x230);
                  unaff_x22 = (long *)(ulong)(0xff < *(ushort *)((long)register0x00000008 + -0x220))
                  ;
                }
              }
              *(undefined8 *)((long)register0x00000008 + -0x2a8) = uVar29;
              *(undefined8 *)((long)register0x00000008 + -0x2b0) = uVar28;
              *(undefined8 *)((long)register0x00000008 + -0x298) = uVar32;
              *(undefined8 *)((long)register0x00000008 + -0x2a0) = uVar30;
              *(undefined8 *)((long)register0x00000008 + -0x290) = uVar26;
              unaff_x24 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07810590);
              param_5 = (long *)((long)register0x00000008 + -0x220);
              *(undefined8 *)((long)register0x00000008 + -0x218) =
                   *(undefined8 *)((long)register0x00000008 + -0x2a8);
              *(undefined8 *)((long)register0x00000008 + -0x220) =
                   *(undefined8 *)((long)register0x00000008 + -0x2b0);
              *(undefined8 *)((long)register0x00000008 + -0x208) =
                   *(undefined8 *)((long)register0x00000008 + -0x298);
              *(undefined8 *)((long)register0x00000008 + -0x210) =
                   *(undefined8 *)((long)register0x00000008 + -0x2a0);
              *(undefined8 *)((long)register0x00000008 + -0x200) =
                   *(undefined8 *)((long)register0x00000008 + -0x290);
              param_6 = unaff_x23;
              param_7 = unaff_x22;
              func_0x0686a7d0(unaff_x24,plVar13,unaff_x27);
              if (unaff_x26 != 0) {
                func_0x03ea4d6c(unaff_x26,unaff_x24,*(undefined8 *)PTR_DAT_078105a0);
                goto LAB_06893d24;
              }
            }
          }
          else {
LAB_06893d24:
            lVar19 = *unaff_x21;
            uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar15 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)unaff_x28) {
                  puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_06893d70;
                }
                uVar15 = uVar15 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar15 != 0);
            }
            puVar16 = (undefined8 *)func_0x03256b10(unaff_x21,*(long *)unaff_x28,0);
LAB_06893d70:
            uVar26 = (*(code *)*puVar16)(unaff_x21,puVar16[1]);
            unaff_x22 = (long *)func_0x06389f5c(uVar26,0);
            lVar19 = *unaff_x21;
            unaff_x23 = *(long **)(uVar20 + 0x60);
            uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar15 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)unaff_x28) {
                  puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_06893dd8;
                }
                uVar15 = uVar15 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar15 != 0);
            }
            puVar16 = (undefined8 *)func_0x03256b10(unaff_x21,*(long *)unaff_x28,0);
LAB_06893dd8:
            plVar17 = (long *)(*(code *)*puVar16)(unaff_x21,puVar16[1]);
            if (unaff_x23 != (long *)0x0) {
              lVar19 = *unaff_x23;
              uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
              unaff_x24 = *(long **)PTR_DAT_07778fa0;
              if (uVar15 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e4a0) {
                    puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_06893e4c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar15 != 0);
              }
              puVar16 = (undefined8 *)func_0x03256b10(unaff_x23,*(long *)PTR_DAT_0777e4a0,0);
LAB_06893e4c:
              param_7 = (long *)puVar16[1];
              param_5 = plVar17;
              param_6 = unaff_x22;
              uVar26 = (*(code *)*puVar16)(unaff_x23,unaff_x24,plVar13);
              unaff_x21 = plVar17;
              if (*(long *)(uVar20 + 0x40) != 0) {
                uVar20 = func_0x068b94a0(*(long *)(uVar20 + 0x40),uVar26,0,0);
                return uVar20;
              }
            }
          }
        }
      }
    }
    func_0x03280cac();
    *(code **)((long)register0x00000008 + -0x2d0) =
         MergeEngine_ECS_Systems_Items_TimeCycleSystem__SkipCooldownEntirely;
    *(long **)((long)register0x00000008 + -0x2c0) = plVar13;
    *(ulong *)((long)register0x00000008 + -0x2b8) = uVar20;
    unaff_x20 = 0x7e28000;
    if ((bRam0000000007e28d75 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a600);
      bRam0000000007e28d75 = 1;
    }
    puVar4 = PTR_DAT_0777a600;
    if (extraout_x1 != (long *)0x0) goto code_r0x06893ed8;
    unaff_x30 = MergeEngine_ECS_Systems_Items_TimeCycleSystem__ProcessCycle;
    param_2 = func_0x03280cac();
    unaff_x19 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2d0);
    param_3 = extraout_x1_00;
    param_1 = extraout_d0;
  } while( true );
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
    if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
      puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x10) * 0x10 + 0x138);
      goto LAB_06894510;
    }
  }
LAB_068944f0:
  puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0x10);
LAB_06894510:
                    /* WARNING: Could not recover jumptable at 0x0689452c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar20 = (*(code *)*puVar16)(param_3,3,puVar16[1]);
  return uVar20;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_06892ad0:
    if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
      puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 3) * 0x10 + 0x138);
      goto LAB_06893050;
    }
  }
LAB_06892ae8:
  puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,3);
LAB_06893050:
  iVar9 = (*(code *)*puVar16)(param_3,puVar16[1]);
  lVar19 = *param_3;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
        puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 5) * 0x10 + 0x138);
        goto LAB_068930b0;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,5);
LAB_068930b0:
  (*(code *)*puVar16)((double)iVar9,param_3,puVar16[1]);
  lVar19 = *param_3;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
        puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xd) * 0x10 + 0x138);
        goto LAB_06893110;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0xd);
LAB_06893110:
  (*(code *)*puVar16)(param_3,0,puVar16[1]);
  lVar19 = *param_3;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
        puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xb) * 0x10 + 0x138);
        goto LAB_06893170;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar16 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar4,0xb);
LAB_06893170:
  (*(code *)*puVar16)(param_3,0,puVar16[1]);
  uVar20 = MergeEngine_ECS_Systems_Items_TimeCycleSystem__ProcessDelay(param_1,param_2,param_3);
  return uVar20;
code_r0x06893ed8:
  lVar19 = *extraout_x1;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a600) {
        puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 3) * 0x10 + 0x138);
        goto LAB_06893f30;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar16 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_0777a600,3);
LAB_06893f30:
  iVar9 = (*(code *)*puVar16)(extraout_x1,puVar16[1]);
  if (iVar9 == 0) {
    lVar19 = *extraout_x1;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_06893f98;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar4,1);
LAB_06893f98:
    iVar9 = (*(code *)*puVar16)(extraout_x1,puVar16[1]);
    uVar20 = (ulong)(iVar9 == 0);
  }
  else {
    uVar20 = 0;
  }
  return uVar20;
}

