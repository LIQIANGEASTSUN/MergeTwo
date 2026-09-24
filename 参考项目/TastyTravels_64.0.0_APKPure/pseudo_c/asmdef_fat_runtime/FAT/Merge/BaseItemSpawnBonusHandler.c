/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.BaseItemSpawnBonusHandler$$.ctor RVA 0x21452f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021552f4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02155374 + 0x2155308);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02155378 + 0x215531c));
    func_0x01384978(*(undefined4 *)(_UNK_0215537c + 0x2155328));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_02155380 + 0x2155340);
  *(undefined1 *)(param_1 + 0xc) = 1;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x02450578(uVar2,**(undefined4 **)(_UNK_02155384 + 0x2155358));
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$SetDirty RVA 0x2145388 =====

void FUN_02155388(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x5b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$TryProcessPity RVA 0x2145c48 =====

undefined4 FUN_02155c48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0xb46d,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0xb46d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229da30(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$OnAfterSpawn RVA 0x2145cc0 =====

void FUN_02155cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb472,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb472,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c9080(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$OnItemSpawned RVA 0x2145d3c =====

void FUN_02155d3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb471,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb471,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.get_priority RVA 0x2145da8 =====

undefined4 FUN_02155da8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb466,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb466,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.OnRegister RVA 0x2145dfc =====

void FUN_02155dfc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb467,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb467,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02155e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144));
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.OnUnRegister RVA 0x2145e60 =====

void FUN_02155e60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb469,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb469,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02155ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,*(undefined4 *)(*param_1 + 0x14c));
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$FAT.Merge.ISpawnBonusHandler.Process RVA 0x2145ec4 =====

void FUN_02155ec4(int *param_1,int param_2)

{
  int iVar1;
  int iStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0xb46b,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(param_2 + 0x20) == 8 || *(int *)(param_2 + 0x20) == 2) &&
         (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2,*(undefined4 *)(*param_1 + 0x10c))
         , iVar1 != 0)) {
        iStack_18 = 0;
        iStack_14 = 0;
        iVar1 = (**(code **)(*param_1 + 0x130))
                          (param_1,param_2,&iStack_14,&iStack_18,*(undefined4 *)(*param_1 + 0x134));
        if ((iStack_14 < 1) || ((iVar1 == 0 || (iStack_18 < 1)))) {
          func_0x02156298(param_1,param_2);
        }
        else {
          func_0x02155fe8(param_1,iStack_14,iStack_18,param_2);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb46b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$SpawnReward RVA 0x2145fe8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02155fe8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02156274 + 0x2156008);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02156278 + 0x2156020));
    func_0x01384978(*(undefined4 *)(_UNK_0215627c + 0x215602c));
    func_0x01384978(*(undefined4 *)(_UNK_02156280 + 0x2156038));
    func_0x01384978(*(undefined4 *)(_UNK_02156284 + 0x2156044));
    *pcVar9 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xb46e,0);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if (((0 < iVar1) && (iVar1 = *(int *)(param_4 + 0x10), iVar1 != 0)) &&
       (iVar2 = func_0x02feb690(iVar1,&uStack_28,1,**(undefined4 **)(_UNK_02156288 + 0x21560e4)),
       iVar2 != 0)) {
      iVar2 = func_0x0215663c(param_1,param_4,uStack_28);
      piVar3 = (int *)func_0x021566f4();
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_0215628c + 0x215612c)) {
            puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0x180);
            goto LAB_02156174;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0215628c + 0x215612c),0x18);
LAB_02156174:
      (*(code *)*puVar5)(piVar3,puVar5[1]);
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x40);
      uVar6 = (**(code **)(*param_1 + 0x120))(param_1,*(undefined4 *)(*param_1 + 0x124));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x01cdcbac(iVar4,param_2,iVar2 * param_3,uVar6,0,0,0,0xc6,
                              **(undefined4 **)(_UNK_02156290 + 0x21561dc),
                              **(undefined4 **)(_UNK_02156294 + 0x21561e8),0);
      (**(code **)(*param_1 + 0x150))(param_1,uVar6,iVar1,*(undefined4 *)(*param_1 + 0x154));
      (**(code **)(*param_1 + 0x138))
                (param_1,param_2,iVar2 * param_3,param_4,*(undefined4 *)(*param_1 + 0x13c));
      (**(code **)(*param_1 + 0x158))(param_1,1,param_4,*(undefined4 *)(*param_1 + 0x15c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb46e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$SimulateSpawn RVA 0x2146298 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02156298(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  int iStack_30;
  int iStack_2c;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02156518 + 0x21562b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215651c + 0x21562c8));
    func_0x01384978(*(undefined4 *)(_UNK_02156520 + 0x21562d4));
    func_0x01384978(*(undefined4 *)(_UNK_02156524 + 0x21562e0));
    func_0x01384978(*(undefined4 *)(_UNK_02156528 + 0x21562ec));
    func_0x01384978(*(undefined4 *)(_UNK_0215652c + 0x21562f8));
    func_0x01384978(*(undefined4 *)(_UNK_02156530 + 0x2156304));
    *pcVar3 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xb473,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (((*(int *)(param_2 + 0x10) != 0) && (0 < *(int *)(param_2 + 0x1c))) &&
       (iVar1 = func_0x02feb690(*(int *)(param_2 + 0x10),&iStack_24,1,
                                **(undefined4 **)(_UNK_02156534 + 0x2156390)), iVar1 != 0)) {
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
      iVar1 = iStack_24;
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02122bb4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
        iVar1 = param_1[4];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0xc) != 0) {
          piVar6 = *(int **)(_UNK_02156538 + 0x215642c);
          iVar2 = param_1[4];
          iVar1 = *piVar6;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar6;
          }
          iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
          if (iVar5 == 0) {
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar6;
            }
            uVar4 = **(undefined4 **)(iVar1 + 0x5c);
            iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0215653c + 0x2156478));
            func_0x03a06bcc(iVar5,uVar4,**(undefined4 **)(_UNK_02156540 + 0x2156498),0);
            *(int *)(*(int *)(*piVar6 + 0x5c) + 4) = iVar5;
          }
          func_0x02fbdda8(&iStack_30,iVar2,iVar5,0,**(undefined4 **)(_UNK_02156544 + 0x21564c4));
          bVar7 = iStack_30 == 1;
          iVar1 = extraout_r2;
          if (0 < iStack_30) {
            iVar1 = iStack_2c;
          }
          iVar2 = iStack_30 + -1;
          if (iStack_30 >= 1) {
            bVar7 = iVar1 == 0;
            iVar2 = iVar1;
          }
          if (!bVar7 && iVar2 < 0 == (iStack_30 < 1 && SBORROW4(iStack_30,1))) {
            FUN_02155fe8(param_1,iStack_30,iVar1,param_2);
            return;
          }
        }
        (**(code **)(*param_1 + 0x158))(param_1,0,param_2,*(undefined4 *)(*param_1 + 0x15c));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb473,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$IsValidForContext RVA 0x2146548 =====

undefined4 FUN_02156548(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0xb46c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb46c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$OnRegister RVA 0x21465a4 =====

void FUN_021565a4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb468,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb468,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$OnUnRegister RVA 0x21465f0 =====

void FUN_021565f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb46a,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb46a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$CalculateSmartEnergyRate RVA 0x214663c =====

undefined4 FUN_0215663c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0xb46f,0);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02123058(param_3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar1 + 0x2e) == '\0') {
      uVar2 = 1;
    }
    else {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb46f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021806fc(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$PlayRewardVisual RVA 0x2146784 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02156784(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_021568dc + 0x21567a4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021568e0 + 0x21567b8));
    func_0x01384978(*(undefined4 *)(_UNK_021568e4 + 0x21567c4));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb470,0);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_2c,param_3,0);
    uVar1 = uStack_28;
    uVar3 = uStack_2c;
    if (*(int *)(**(int **)(_UNK_021568e8 + 0x2156844) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_2c,uVar3,uVar1,0);
    uVar3 = (**(code **)(*param_1 + 0x128))(param_1,*(undefined4 *)(*param_1 + 300));
    if (*(int *)(**(int **)(_UNK_021568ec + 0x21568a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02072a58(param_2,uStack_2c,uStack_28,uStack_24,uVar3,0,0,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xb470,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler$$InitOutputs RVA 0x21468f0 =====

/* WARNING: Removing unreachable block (ram,0x02156cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021568f0(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02156db8 + 0x2156910);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02156dbc + 0x2156924));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc0 + 0x2156930));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc4 + 0x215693c));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc8 + 0x2156948));
    func_0x01384978(*(undefined4 *)(_UNK_02156dcc + 0x2156954));
    func_0x01384978(*(undefined4 *)(_UNK_02156dd0 + 0x2156960));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x6f5d,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6f5d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar3,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *param_2;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_02156dd4 + 0x21569d4)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xd8);
        goto LAB_02156a1c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02156dd4 + 0x21569d4),3);
LAB_02156a1c:
  (*(code *)*puVar4)(param_2,puVar4[1]);
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *param_3;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_02156dd8 + 0x2156a48)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
        goto LAB_02156a90;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02156dd8 + 0x2156a48),0);
LAB_02156a90:
  piVar7 = (int *)(*(code *)*puVar4)(param_3,puVar4[1]);
  piVar10 = *(int **)(_UNK_02156ddc + 0x2156ab4);
  do {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_02156b0c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_02156b0c:
    iVar3 = (*(code *)*puVar4)(piVar7,puVar4[1]);
    if (iVar3 == 0) break;
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02156de0 + 0x2156b40)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_02156b88;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02156de0 + 0x2156b40),0);
LAB_02156b88:
    uVar5 = (*(code *)*puVar4)(piVar7,puVar4[1]);
    if (*(int *)(**(int **)(_UNK_02156de4 + 0x2156ba8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar5,0);
    uVar2 = uStack_28;
    uVar1 = uStack_2c;
    uVar5 = uStack_30;
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *param_2;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02156de8 + 0x2156bf0)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xd0);
          goto LAB_02156c38;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02156de8 + 0x2156bf0),2);
LAB_02156c38:
    (*(code *)*puVar4)(param_2,uVar5,uVar1,uVar2,puVar4[1]);
  } while( true );
  if (piVar7 != (int *)0x0) {
    iVar3 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_02156dec + 0x2156c78)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_02156cc0;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02156dec + 0x2156c78),0);
LAB_02156cc0:
    (*(code *)*puVar4)(piVar7,puVar4[1]);
  }
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler.<>c$$.cctor RVA 0x2146df4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02156df4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02156e4c + 0x2156e04);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02156e50 + 0x2156e18));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02156e54 + 0x2156e2c);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler.<>c$$.ctor RVA 0x2146e58 =====

void FUN_02156e58(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.BaseItemSpawnBonusHandler.<>c$$<SimulateSpawn>b__19_0 RVA 0x2146e60 =====

undefined4 FUN_02156e60(void)

{
  undefined4 in_r3;
  
  return in_r3;
}


