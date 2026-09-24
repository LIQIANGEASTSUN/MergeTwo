/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ActivitySpawnBonusHandler<object>$$.ctor RVA 0x3da8180 =====

void FUN_03db8180(int param_1,undefined4 param_2)

{
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.Merge.ActivitySpawnBonusHandler<object>$$FAT.Merge.ISpawnBonusHandler.get_priority RVA 0x3da819c =====

undefined4 FUN_03db819c(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.ActivitySpawnBonusHandler<object>$$FAT.Merge.ISpawnBonusHandler.OnRegister RVA 0x3da81a4 =====

void FUN_03db81a4(void)

{
  return;
}



// ===== FAT.Merge.ActivitySpawnBonusHandler<object>$$FAT.Merge.ISpawnBonusHandler.OnUnRegister RVA 0x3da81a8 =====

void FUN_03db81a8(void)

{
  return;
}



// ===== FAT.Merge.ActivitySpawnBonusHandler<object>$$FAT.Merge.ISpawnBonusHandler.Process RVA 0x3da81ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03db81ac(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_03db8370 + 0x3db81c8);
  if (*pcVar6 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03db8374 + 0x3db81dc));
    func_0x02457d54(*(undefined4 *)(_UNK_03db8378 + 0x3db81e8));
    *pcVar6 = '\x01';
  }
  iStack_24 = 0;
  if (param_2 == 0) {
    func_0x02457d50();
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (0 < *(int *)(param_2 + 0x1c))) {
    func_0x02feb690(*(int *)(param_2 + 0x10),&iStack_24,1,
                    **(undefined4 **)(_UNK_03db837c + 0x3db822c));
    piVar7 = *(int **)(param_1 + 0xc);
    if (piVar7 != (int *)0x0) {
      uVar8 = *(undefined4 *)(param_2 + 0x1c);
      iVar1 = *piVar7;
      piVar9 = *(int **)(_UNK_03db8380 + 0x3db8254);
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar3 = *piVar9;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
            goto LAB_03db829c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x02457d88(piVar7,iVar3,1);
LAB_03db829c:
      iVar3 = (*(code *)*puVar2)(piVar7,puVar2[1]);
      iVar1 = iStack_24;
      if (0 < iVar3) {
        if (iStack_24 == 0) {
          func_0x02457d50();
        }
        iVar1 = func_0x02122bb4(iVar1,0);
        if (iVar1 == 0) {
          func_0x02457d50();
        }
        if (iVar3 == *(int *)(iVar1 + 0x14)) {
          piVar7 = *(int **)(param_1 + 0xc);
          if (piVar7 == (int *)0x0) {
            func_0x02457d50();
          }
          iVar1 = *piVar7;
          iVar3 = *piVar9;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar9[-1] == iVar3) {
                puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
                goto LAB_03db8350;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x02457d88(piVar7,iVar3,0);
LAB_03db8350:
          (*(code *)*puVar2)(piVar7,uVar8,param_2,puVar2[1]);
        }
      }
    }
  }
  return;
}



// ===== FAT.Merge.ActivitySpawnBonusHandler<__Il2CppFullySharedGenericType>$$.ctor RVA 0x3da8384 =====

int FUN_03db8384(int param_1,undefined4 *****param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined8 uVar6;
  int aiStack_38 [2];
  undefined1 auStack_30 [4];
  undefined4 ****ppppuStack_2c;
  int iStack_28;
  
  piVar4 = *(int **)(iRam03db8440 + 0x3db83a8);
  iStack_28 = *piVar4;
  iVar2 = *(int *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60) + 0x84);
  iVar1 = -(iVar2 + 7U & 0xfffffff8);
  ppppuStack_2c = param_2;
  func_0x04874ed4(param_1,0);
  iVar3 = *(int *)(param_3 + 0x10);
  if (-1 < *(int *)(**(int **)(iVar3 + 0x60) + 0x14)) {
    param_2 = &ppppuStack_2c;
  }
  func_0x02457e7c(auStack_30 + iVar1,param_2,iVar2);
  func_0x02457da8(param_1,*(int *)(*(int *)(*(int *)(iVar3 + 0x60) + 4) + 0x40) + 0x14,
                  auStack_30 + iVar1,iVar2);
  iVar2 = *piVar4;
  bVar5 = iVar2 == iStack_28;
  if (!bVar5) {
    uVar6 = func_0x054d3bc0();
                    /* WARNING: Could not recover jumptable at 0x03db8440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (!bVar5) {
      *(undefined4 *)((int)aiStack_38 + iVar1 + 4) = 0x3db8440;
      *(undefined1 **)((int)aiStack_38 + iVar1) = &stack0xfffffff8;
      piVar4 = (int *)func_0x02457da4((int)uVar6,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(*(int *)((int)((ulonglong)uVar6 >> 0x20) +
                                                                  0x10) + 0x60) + 4) + 0x40));
      return *piVar4;
    }
    iVar1 = (*(code *)((uint)&stack0xfffffff8 | param_1 << 0x11))();
    return iVar1;
  }
  return iVar2;
}



// ===== FAT.Merge.ActivitySpawnBonusHandler<__Il2CppFullySharedGenericType>$$FAT.Merge.ISpawnBonusHandler.get_priority RVA 0x3da8444 =====

undefined4 FUN_03db8444(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           func_0x02457da4(param_1,*(undefined4 *)
                                    (*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4) + 0x40)
                          );
  return *puVar1;
}



// ===== FAT.Merge.ActivitySpawnBonusHandler<__Il2CppFullySharedGenericType>$$FAT.Merge.ISpawnBonusHandler.OnRegister RVA 0x3da8464 =====

void FUN_03db8464(void)

{
  return;
}



// ===== FAT.Merge.ActivitySpawnBonusHandler<__Il2CppFullySharedGenericType>$$FAT.Merge.ISpawnBonusHandler.OnUnRegister RVA 0x3da8468 =====

void FUN_03db8468(void)

{
  return;
}



// ===== FAT.Merge.ActivitySpawnBonusHandler<__Il2CppFullySharedGenericType>$$FAT.Merge.ISpawnBonusHandler.Process RVA 0x3da846c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03db846c(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int aiStack_50 [2];
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar10 = (char *)(_UNK_03db8764 + 0x3db8494);
  iStack_2c = **(int **)(_UNK_03db8768 + 0x3db8498);
  uStack_40 = param_1;
  if (*pcVar10 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03db876c + 0x3db84b4));
    *pcVar10 = '\x01';
  }
  iVar3 = **(int **)(*(int *)(param_3 + 0x10) + 0x60);
  uVar1 = *(ushort *)(iVar3 + 0xbd);
  iVar12 = *(int *)(iVar3 + 0x84);
  iVar4 = iVar12;
  if ((uVar1 & 1) == 0) {
    iVar4 = func_0x02457d84();
    iVar3 = **(int **)(*(int *)(param_3 + 0x10) + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0xbd);
    iVar4 = *(int *)(iVar4 + 0x84);
  }
  iVar4 = (int)&uStack_48 - (iVar4 + 0xfU & 0xfffffff8);
  if ((uVar1 & 1) == 0) {
    iVar3 = func_0x02457d84();
  }
  iStack_44 = iVar4 - (*(int *)(iVar3 + 0x84) + 0xfU & 0xfffffff8);
  uVar5 = iVar12 + 7U & 0xfffffff8;
  iVar3 = iStack_44 - uVar5;
  iVar11 = iVar3 - uVar5;
  iStack_3c = 0;
  func_0x02457e10(iVar11,iVar12);
  if (param_2 == 0) {
    func_0x02457d50();
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (0 < *(int *)(param_2 + 0x1c))) {
    func_0x02feb690(*(int *)(param_2 + 0x10),&iStack_3c,1,
                    **(undefined4 **)(_UNK_03db8770 + 0x3db8590));
    uStack_48 = *(undefined4 *)(param_2 + 0x1c);
    uVar6 = func_0x02457da4(uStack_40,
                            *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4) + 0x40)
                            + 0x14);
    func_0x02457e7c(iVar3,uVar6,iVar12);
    iVar7 = func_0x02457da0(**(undefined4 **)(*(int *)(param_3 + 0x10) + 0x60),iVar3);
    if (iVar7 != 0) {
      uVar6 = func_0x02457da4(uStack_40,
                              *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4) +
                                      0x40) + 0x14);
      func_0x02457e7c(iVar3,uVar6,iVar12);
      func_0x02457e7c(iVar11,iVar3,iVar12);
      piVar8 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
      iVar7 = *piVar8;
      if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
        iVar7 = func_0x02457d84();
        piVar8 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
      }
      iVar9 = piVar8[2];
      *(undefined4 *)(iVar11 + -8) = 0;
      *(undefined4 ***)(iVar11 + -4) = &puStack_38;
      func_0x02457db4(iVar7,iVar9,iVar4,iVar11);
      puVar2 = puStack_38;
      iVar4 = iStack_3c;
      if (0 < (int)puStack_38) {
        if (iStack_3c == 0) {
          func_0x02457d50();
        }
        iVar4 = func_0x02122bb4(iVar4,0);
        if (iVar4 == 0) {
          func_0x02457d50();
        }
        if (puVar2 == *(undefined4 **)(iVar4 + 0x14)) {
          uVar6 = func_0x02457da4(uStack_40,
                                  *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4) +
                                          0x40) + 0x14);
          func_0x02457e7c(iVar3,uVar6,iVar12);
          func_0x02457e7c(iVar11,iVar3,iVar12);
          piVar8 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
          iVar4 = *piVar8;
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x02457d84();
            piVar8 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
          }
          iVar3 = piVar8[3];
          uStack_30 = uStack_48;
          puStack_38 = &uStack_30;
          iStack_34 = param_2;
          *(undefined4 ***)(iVar11 + -8) = &puStack_38;
          *(int *)(iVar11 + -4) = param_2;
          func_0x02457db4(iVar4,iVar3,iStack_44,iVar11);
        }
      }
    }
  }
  if (**(int **)(_UNK_03db8774 + 0x3db8750) == iStack_2c) {
    return;
  }
  func_0x054d3bc0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


