/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Actions/Multi/TryMergeBoardMerge.txt
 * Cpp2IL method: Metaplay.Core.Model.MetaActionResult Execute(GameLogic.Player.PlayerModel player, System.Boolean commit)
 * Ghidra function entry: 037ed95c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_037ed95c(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000005e2e648 & 1) == 0) {
    func_0x0249f8e4(&DAT_059d8540);
    func_0x0249f8e4(&DAT_059d89a0);
    func_0x0249f8e4(&DAT_059dd200);
    func_0x0249f8e4(&DAT_059dfe28);
    func_0x0249f8e4(&DAT_059dfe60);
    func_0x0249f8e4(&DAT_059e0280);
    func_0x0249f8e4(&DAT_059cd830);
    func_0x0249f8e4(&DAT_059e1510);
    func_0x0249f8e4(&DAT_05a192a0);
    func_0x0249f8e4(&DAT_059d0510);
    func_0x0249f8e4(&DAT_059e2130);
    func_0x0249f8e4(&DAT_059e2678);
    func_0x0249f8e4(&DAT_059e27d8);
    func_0x0249f8e4(&DAT_059e2940);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a29ba8);
    func_0x0249f8e4(&DAT_05a29870);
    func_0x0249f8e4(&DAT_05a29b28);
    func_0x0249f8e4(&DAT_059d40a8);
    func_0x0249f8e4(&DAT_059d3f50);
    func_0x0249f8e4(&DAT_059d40f8);
    func_0x0249f8e4(&DAT_059e42b8);
    func_0x0249f8e4(&DAT_059e42c0);
    func_0x0249f8e4(&DAT_05a53700);
    func_0x0249f8e4(&DAT_059e46b8);
    func_0x0249f8e4(&DAT_05a2aaf0);
    func_0x0249f8e4(&DAT_05a30640);
    func_0x0249f8e4(&DAT_059d55a8);
    bRam0000000005e2e648 = 1;
  }
  if (param_2 == 0) goto LAB_037ee380;
  lVar6 = func_0x0367263c(param_2,*(undefined8 *)(param_1 + 0x10),0);
  if (lVar6 == 0) {
    if (*(int *)(_DAT_059d8540 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    puVar11 = (undefined8 *)(*(long *)(_DAT_059d8540 + 0xb8) + 0x40);
    goto LAB_037ee35c;
  }
  if ((param_3 & 1) != 0) {
    func_0x0376e450(lVar6,*(undefined8 *)(param_1 + 0x18),0);
    func_0x0376e450(lVar6,*(undefined8 *)(param_1 + 0x20),0);
    uVar7 = func_0x03659ee0(param_2,0);
    uVar8 = func_0x028a379c(param_2,_DAT_05a2aaf0);
    uVar18 = *(undefined8 *)(param_1 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = func_0x028a379c(param_2,_DAT_05a2aaf0);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2c00);
    }
    uVar9 = func_0x03530158(uVar9,0);
    iVar1 = func_0x0377930c(lVar6,param_2,uVar18,uVar14,uVar9,0);
    plVar10 = (long *)func_0x03659ee0(param_2,0);
    if (plVar10 == (long *)0x0) goto LAB_037ee380;
    lVar15 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _DAT_059dfe60) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0x36) * 0x10 + 0x138);
          goto LAB_037edc3c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059dfe60,0x36);
LAB_037edc3c:
    plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar10 == (long *)0x0) goto LAB_037ee380;
    lVar15 = *plVar10;
    uVar18 = *(undefined8 *)(param_1 + 0x10);
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _DAT_059cd830) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_037edcac;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059cd830,2);
LAB_037edcac:
    lVar15 = (*(code *)*puVar11)(plVar10,uVar18,puVar11[1]);
    if (iVar1 != 3) {
      if (*(int *)(_DAT_059d8540 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      puVar11 = (undefined8 *)(*(long *)(_DAT_059d8540 + 0xb8) + 0x110);
      goto LAB_037ee35c;
    }
    if (lVar15 == 0) goto LAB_037ee380;
    uVar18 = func_0x038d9308(lVar15,0);
    uVar9 = func_0x0249fb80(_DAT_059e42b8);
    func_0x0374cd74(uVar9,param_2,lVar6,uVar18,0);
    uVar12 = func_0x0249fb80(_DAT_059e42c0);
    func_0x03705bb8(uVar12,param_2,0);
    uVar13 = func_0x0249fb80(_DAT_059d0510);
    func_0x0282ee2c(uVar13,_DAT_05a192a0);
    uVar18 = *(undefined8 *)(param_1 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar8 = func_0x03530158(uVar8,0);
    func_0x03779dcc(lVar6,uVar18,uVar14,uVar8,param_2,uVar9,uVar12,uVar13,0);
    lVar15 = func_0x0376e450(lVar6,*(undefined8 *)(param_1 + 0x20),0);
    if (lVar15 == 0) {
      func_0x033bfe1c(param_2,uVar13,lVar6,*(undefined8 *)(param_2 + 0x220),0);
      uVar18 = *(undefined8 *)(param_1 + 0x10);
LAB_037ee1b8:
      if (*(int *)(_DAT_059d40f8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar14 = **(undefined8 **)(_DAT_059d40f8 + 0xb8);
    }
    else {
      uVar18 = func_0x0249fb80(_DAT_059e27d8);
      func_0x038ceccc(uVar18,0);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar14 = func_0x036d3908(lVar15,uVar7,0);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x038c9d40(&uStack_78,lVar6,uVar8,uVar14,0);
      if (*(int *)(_DAT_059d3f50 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uStack_a8 = uStack_70;
      uStack_b0 = uStack_78;
      uStack_a0 = uStack_68;
      func_0x0288f218(&uStack_b0,&uStack_98,_DAT_05a29870);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(_DAT_059d89a0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar14 = func_0x03627c8c(uVar14,0);
      if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e46b8);
      }
      uStack_c8 = uStack_90;
      uStack_d0 = uStack_98;
      uStack_b8 = uStack_80;
      uStack_c0 = uStack_88;
      func_0x03652890(param_2,uVar18,&uStack_d0,uVar14,uVar13,0);
      func_0x033bfe1c(param_2,uVar13,lVar6,*(undefined8 *)(param_2 + 0x220),0);
      plVar10 = (long *)func_0x036d3924(lVar15,uVar7,0);
      uVar16 = func_0x036eb018(lVar15,uVar7,0);
      if ((uVar16 & 1) != 0) {
        uVar18 = func_0x036d62d4(lVar15,uVar7,0);
        uVar2 = func_0x036eace0(lVar15,uVar7,0);
        if (plVar10 == (long *)0x0) goto LAB_037ee380;
        lVar6 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == _DAT_059dfe28) {
              puVar11 = (undefined8 *)(lVar6 + (long)(*piVar17 + 8) * 0x10 + 0x138);
              goto LAB_037edfb0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059dfe28,8);
LAB_037edfb0:
        uVar3 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        uVar4 = func_0x034b82d0(plVar10,param_2,0);
        uVar5 = func_0x036f619c(lVar15,uVar7,0);
        uVar14 = func_0x0249fb80(_DAT_059e2130);
        func_0x03863058(uVar14,uVar18,uVar2,uVar3,uVar4,uVar5 & 1,0);
        func_0x0366bae8(param_2,uVar14,0,0);
      }
      uVar18 = func_0x036d62d4(lVar15,uVar7,0);
      uVar2 = func_0x036eace0(lVar15,uVar7,0);
      if (plVar10 == (long *)0x0) goto LAB_037ee380;
      lVar6 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _DAT_059dfe28) {
            puVar11 = (undefined8 *)(lVar6 + (long)(*piVar17 + 8) * 0x10 + 0x138);
            goto LAB_037ee0b8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059dfe28,8);
LAB_037ee0b8:
      uVar3 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      uVar4 = func_0x034b82d0(plVar10,param_2,0);
      uVar5 = func_0x036f619c(lVar15,uVar7,0);
      if (*(int *)(_DAT_059d40a8 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059d40a8);
      }
      func_0x0288f218(param_2,&uStack_98,_DAT_05a29b28);
      uVar14 = uStack_98;
      uVar7 = func_0x0249fb80(_DAT_059dd200);
      func_0x0386329c(uVar7,uVar18,uVar2,uVar3,uVar4,uVar5 & 1,uVar14,uStack_90,0);
      func_0x0366bae8(param_2,uVar7,0,0);
      iVar1 = func_0x036d392c(lVar15,0);
      uVar18 = *(undefined8 *)(param_1 + 0x10);
      if (iVar1 == 0) goto LAB_037ee1b8;
      uStack_78 = CONCAT44(uStack_78._4_4_,iVar1);
      uStack_98 = 0;
      func_0x0288eb6c(&uStack_98,&uStack_78,_DAT_05a29ba8);
      uVar14 = uStack_98;
    }
    uVar7 = func_0x0249fb80(_DAT_059e1510);
    func_0x0389f0e0(uVar7,uVar18,uVar14,0);
    if (*(int *)(_DAT_059e46b8 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    func_0x0276a1a0(param_2,uVar7,_DAT_05a53700);
    if (lVar15 != 0) {
      func_0x036e5348(lVar15,param_2,1,0);
      func_0x036e5938(lVar15,param_2,*(undefined8 *)(param_1 + 0x20),0);
    }
    plVar10 = *(long **)(param_2 + 0x1e0);
    if (plVar10 == (long *)0x0) {
LAB_037ee380:
      lVar6 = func_0x0249fb90();
      return *(undefined8 *)(lVar6 + 0x10);
    }
    lVar6 = *plVar10;
    uVar18 = *(undefined8 *)(param_1 + 0x10);
    uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _DAT_059e0280) {
          puVar11 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_037ee2bc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059e0280,0);
LAB_037ee2bc:
    (*(code *)*puVar11)(plVar10,uVar18,uVar13,puVar11[1]);
    uVar18 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(_DAT_059e2678 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar14 = **(undefined8 **)(_DAT_059e2678 + 0xb8);
    if (*(int *)(_DAT_059d55a8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059d55a8);
    }
    uVar16 = func_0x02903704(uVar18,uVar14,_DAT_05a30640);
    if ((uVar16 & 1) != 0) {
      func_0x033cf2b8(param_2,0);
    }
  }
  if (*(int *)(_DAT_059e2940 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  puVar11 = *(undefined8 **)(_DAT_059e2940 + 0xb8);
LAB_037ee35c:
  return *puVar11;
}

