/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.FrozenItemMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.get_priority RVA 0x212e06c =====

undefined4 FUN_0213e06c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb42d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb42d,0);
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
  return 0x65;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$get__isValid RVA 0x212e0c0 =====

undefined4 FUN_0213e0c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
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
  
  iVar1 = func_0x0229f06c(0xb42e,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[2];
    if (param_1 == (int *)0x0) {
      return 0;
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x128,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      if (iVar1 != 0) {
        uVar6 = func_0x02b4cec4(param_1);
        iVar1 = (int)((ulonglong)uVar6 >> 0x20);
        bVar5 = (int)uVar6 != 0;
        uVar4 = 0;
        if ((int)-(iVar1 + (uint)bVar5) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar5)))
        {
          uVar4 = 1;
        }
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x128,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb42e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$LogEditor RVA 0x212e12c =====

void FUN_0213e12c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb42f,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb42f,0);
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



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$.ctor RVA 0x212e178 =====

void FUN_0213e178(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.Process RVA 0x212e194 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213e194(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int extraout_r1;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar8 = (char *)(_UNK_0213e454 + 0x213e1b0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213e458 + 0x213e1c4));
    func_0x01384978(*(undefined4 *)(_UNK_0213e45c + 0x213e1d0));
    func_0x01384978(*(undefined4 *)(_UNK_0213e460 + 0x213e1dc));
    func_0x01384978(*(undefined4 *)(_UNK_0213e464 + 0x213e1e8));
    func_0x01384978(*(undefined4 *)(_UNK_0213e468 + 0x213e1f4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb430,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb430,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = FUN_0213e0c0(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x021566f4(0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0213e46c + 0x213e280)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
          goto LAB_0213e2c8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0213e46c + 0x213e280),1);
LAB_0213e2c8:
    iVar1 = (*(code *)*puVar3)(piVar2,2,puVar3[1]);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(param_2 + 8) != 0) && (iVar1 = FUN_02139cf4(), iVar1 != 0)) {
        iStack_1c = 0;
        uStack_20 = 0;
        func_0x03507d38(&uStack_20,*(undefined4 *)(iVar1 + 8),
                        **(undefined4 **)(_UNK_0213e470 + 0x213e314));
        if (((char)uStack_20 != '\0') && (iStack_1c == 1)) {
          iVar7 = *(int *)(param_2 + 0x18);
          iVar1 = extraout_r1;
          if (iVar7 != 0) {
            iVar1 = *(int *)(param_2 + 0x1c);
          }
          if ((iVar7 != 0 && iVar1 != 0) &&
             ((iVar1 = func_0x02168a28(iVar7,0), iVar1 != 0 ||
              (iVar1 = func_0x02168a28(*(undefined4 *)(param_2 + 0x1c),0), iVar1 != 0)))) {
            iVar1 = *(int *)(param_1 + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0294655c(iVar1,0);
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_0213e474 + 0x213e430));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01de4aa0(iVar1,0);
          }
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(param_2 + 0x14);
          if (*(char *)(iVar1 + 0x54) == '\0') {
            func_0x0213e478(param_1,iVar7);
          }
          else if (iVar7 != 0) {
            iVar1 = FUN_0210cd28(iVar7,0);
            uVar9 = FUN_0210e2d4(iVar7,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_30 = 60000;
            uStack_2c = 0;
            uStack_28 = 0;
            FUN_020ee6cc(iVar1,iVar7,uVar9);
          }
        }
      }
    }
  }
  return;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$_TrySpawnFrozenItem RVA 0x212e478 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0213e478(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_0213e6d8 + 0x213e494);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213e6dc + 0x213e4a8));
    *pcVar9 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iVar2 = func_0x0229f06c(0xb431,0);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02945d94(iVar2,0);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_0213e6e0 + 0x213e550));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x01de55a4(iVar2,0);
        iVar2 = *(int *)(param_1 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar2 + 0x3c);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar2 = 0;
        if (iVar4 < *(int *)(iVar10 + 0x1c)) {
          iVar4 = *(int *)(param_1 + 8);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar2 = 0;
          iVar4 = func_0x029465b8(iVar4,iVar3,0);
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 8);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar3 + 0x20) <= *(int *)(iVar4 + 0x44)) {
              iVar4 = func_0x0213e77c(param_1,param_2,iVar3,&uStack_28,&uStack_30,&uStack_34);
              if (iVar4 != 0) {
                iVar2 = FUN_0210cd28(param_2,0);
                uVar1 = uStack_28;
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = FUN_020ee6cc(iVar2,param_2,uVar1);
                uVar1 = uStack_34;
                iVar2 = 0;
                if (iVar4 != 0) {
                  uVar11 = *(undefined4 *)(iVar3 + 0x18);
                  uVar8 = *(undefined4 *)(param_1 + 8);
                  uVar5 = FUN_0210e5f4(iVar4,0);
                  uVar6 = FUN_0210e2d4(iVar4,0);
                  uVar7 = FUN_0210e2d4(iVar4,0);
                  uVar7 = func_0x02157e88(uVar7,0);
                  func_0x019a4094(uVar8,uVar11,uVar1,uVar5,uVar6,uVar7,0);
                  iVar2 = iVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb431,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x022870a8(iVar2,param_1,param_2,0);
  }
  return iVar2;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.OnRegister RVA 0x212e6e4 =====

void FUN_0213e6e4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb43a,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb43a,0);
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



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.OnUnRegister RVA 0x212e730 =====

void FUN_0213e730(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb43b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb43b,0);
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



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$TryPickCandidateAndLife RVA 0x212e77c =====

/* WARNING: Removing unreachable block (ram,0x0213ef90) */
/* WARNING: Removing unreachable block (ram,0x0213efac) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0213e77c(undefined4 param_1,int param_2,int param_3,int *param_4,longlong *param_5,
                 int *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  int unaff_r5;
  byte bVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  longlong lVar18;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int aiStack_44 [4];
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar13 = (char *)(_UNK_0213f188 + 0x213e79c);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213f18c + 0x213e7b4));
    func_0x01384978(*(undefined4 *)(_UNK_0213f190 + 0x213e7c0));
    func_0x01384978(*(undefined4 *)(_UNK_0213f194 + 0x213e7cc));
    func_0x01384978(*(undefined4 *)(_UNK_0213f198 + 0x213e7d8));
    func_0x01384978(*(undefined4 *)(_UNK_0213f19c + 0x213e7e4));
    func_0x01384978(*(undefined4 *)(_UNK_0213f1a0 + 0x213e7f0));
    func_0x01384978(*(undefined4 *)(_UNK_0213f1a4 + 0x213e7fc));
    func_0x01384978(*(undefined4 *)(_UNK_0213f1a8 + 0x213e808));
    func_0x01384978(*(undefined4 *)(_UNK_0213f1ac + 0x213e814));
    func_0x01384978(*(undefined4 *)(_UNK_0213f1b0 + 0x213e820));
    func_0x01384978(*(undefined4 *)(_UNK_0213f1b4 + 0x213e82c));
    *pcVar13 = '\x01';
  }
  iVar14 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  aiStack_44[2] = 0;
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  iStack_54 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  iStack_64 = 0;
  iStack_68 = 0;
  iStack_6c = 0;
  uStack_70 = 0;
  iVar2 = func_0x0229f06c(0xb432,0);
  if (iVar2 != 0) {
    iVar14 = func_0x0229f13c(0xb432,0);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0229d3e4(iVar14,param_1,param_2,param_3,param_4,param_5,param_6,0);
    return uVar3;
  }
  *param_4 = 0;
  *(undefined4 *)param_5 = 0;
  *(undefined4 *)((int)param_5 + 4) = 0;
  *param_6 = 0;
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0213f1f0(*(undefined4 *)(param_3 + 0x48),&uStack_28,&uStack_2c);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = func_0x0213f1f0(*(undefined4 *)(param_3 + 0x2c),&iStack_30,&iStack_34);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = FUN_0210e2d4(param_2,0);
  piVar5 = (int *)func_0x021566f4(0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      unaff_r5 = piVar12[-1];
      if (unaff_r5 == **(int **)(_UNK_0213f1b8 + 0x213e970)) {
        puVar6 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0x118);
        goto LAB_0213e9b8;
      }
      uVar3 = uVar3 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar3 != 0);
  }
  puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_0213f1b8 + 0x213e970),0xb);
LAB_0213e9b8:
  iVar2 = (*(code *)*puVar6)(piVar5,uVar4,puVar6[1]);
  if (iVar2 != 0) {
    iVar14 = *(int *)(iVar2 + 0x44);
    unaff_r5 = iVar2;
  }
  if (iVar2 == 0 || iVar14 == 0) {
    return 0;
  }
  iVar2 = func_0x0364c54c(iVar14,uVar4,**(undefined4 **)(_UNK_0213f1bc + 0x213ea00));
  if (iVar2 < 0) {
    return 0;
  }
  piVar5 = *(int **)(_UNK_0213f1c0 + 0x213ea24);
  iVar7 = *piVar5;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x01384ab4();
    iVar7 = *piVar5;
  }
  iVar7 = **(int **)(iVar7 + 0x5c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(aiStack_44 + 1,iVar7,aiStack_44,**(undefined4 **)(_UNK_0213f1c4 + 0x213ea60));
  piVar5 = *(int **)(_UNK_0213f1c8 + 0x213ea74);
  iVar7 = *piVar5;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x01384ab4();
    iVar7 = *piVar5;
  }
  iVar7 = **(int **)(iVar7 + 0x5c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0213f1cc + 0x213eaac);
  func_0x0359c380(&uStack_80,iVar7,&iStack_54,*puVar6);
  iVar7 = *piVar5;
  uStack_4c = uStack_7c;
  uStack_50 = uStack_80;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x01384ab4();
    iVar7 = *piVar5;
  }
  iVar7 = **(int **)(iVar7 + 0x5c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&uStack_80,iVar7,&iStack_64,*puVar6);
  iVar7 = aiStack_44[0];
  uStack_5c = uStack_7c;
  uStack_60 = uStack_80;
  if (aiStack_44[0] == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar7,**(undefined4 **)(_UNK_0213f1d0 + 0x213eb38));
  iVar7 = iStack_54;
  if (iStack_54 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0213f1d4 + 0x213eb5c);
  func_0x0245055c(iVar7,*puVar6);
  iVar7 = iStack_64;
  if (iStack_64 == 0) {
    func_0x01384bf0();
  }
  func_0x0245055c(iVar7,*puVar6);
  iVar7 = func_0x0213f304(uStack_28,uStack_2c,aiStack_44[0],iStack_54,iStack_64);
  bVar15 = 0;
  if (iVar7 == 0) goto LAB_0213ef78;
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x50);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x01db1798(iVar7,uVar4,&iStack_68,&uStack_70,0);
  iVar10 = aiStack_44[0];
  iVar7 = iStack_68;
  if (0 < iStack_68) {
    if (aiStack_44[0] == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x03d5bb20(iVar10,iVar7,&iStack_6c,**(undefined4 **)(_UNK_0213f1d8 + 0x213ec18));
    bVar15 = 0;
    if (iVar7 == 0) goto LAB_0213ef78;
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar11 = iStack_54;
    iVar10 = iStack_68;
    iVar7 = iStack_6c;
    iVar8 = *(int *)(param_3 + 0x38);
    if (iStack_54 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_0213f1dc + 0x213ec70);
    uVar3 = func_0x02450564(iVar11,iVar10,*puVar6);
    iVar11 = iStack_64;
    iVar10 = iStack_68;
    if (iStack_64 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x02450564(iVar11,iVar10,*puVar6);
    iVar14 = *(int *)(iVar14 + 0xc) + -2;
    if (-1 < iVar14) {
      bVar15 = 0;
      iVar8 = iVar8 + iVar2;
      if (iVar14 < iVar8) goto LAB_0213ef78;
      bVar15 = 0;
      iVar7 = iVar7 - (uVar3 & (uVar9 ^ 1));
      if (iVar14 < iVar7) {
        iVar7 = iVar14;
      }
      if (iVar7 < iVar8) goto LAB_0213ef78;
      iVar14 = func_0x01c24918(0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = *(int *)(iVar14 + 0x90);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = func_0x01dc13cc(iVar14,0);
      iVar2 = *(int *)(param_3 + 0x28);
      pcVar13 = (char *)(_UNK_0213f1e0 + 0x213ed50);
      if (*pcVar13 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0213f1e4 + 0x213ed64));
        *pcVar13 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_0213f1e8 + 0x213ed78) + 0x74) == 0) {
        func_0x01384ab4();
      }
      fVar17 = (float)VectorSignedToFloat(iVar2 * iVar14,(byte)(in_fpscr >> 0x16) & 3);
      fVar17 = (float)func_0x02450364(fVar17 / _UNK_0213f180);
      iVar14 = (int)fVar17;
      if (fVar17 == _UNK_0213f184) {
        iVar14 = -0x80000000;
      }
      iStack_98 = 0;
      piVar5 = (int *)func_0x021566f4(0);
      iStack_94 = -1;
      iStack_90 = 0x7fffffff;
      do {
        iVar2 = func_0x0213fbc8(unaff_r5,iVar8);
        if (0 < iVar2) {
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar10 = *piVar5;
          uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar3 != 0) {
            piVar12 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar12[-1] == **(int **)(_UNK_0213f1ec + 0x213ee1c)) {
                puVar6 = (undefined4 *)(iVar10 + *piVar12 * 8 + 0x108);
                goto LAB_0213ee64;
              }
              uVar3 = uVar3 - 1;
              piVar12 = piVar12 + 2;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_0213f1ec + 0x213ee1c),9);
LAB_0213ee64:
          iVar10 = (*(code *)*puVar6)(piVar5,iVar2,puVar6[1]);
          cVar1 = '\0';
          if (iVar10 != 0) {
            cVar1 = *(char *)(iVar10 + 0x3d);
          }
          if (iVar10 != 0 && cVar1 != '\0') {
            func_0x01e71414(&uStack_80,iVar2,0);
            iVar11 = func_0x01e7139c(uStack_80,uStack_7c,uStack_78,0);
            iVar10 = iVar14;
            if (iVar14 <= iVar11) {
              iVar10 = iStack_30;
            }
            if (((iVar10 <= iVar11) && (iVar11 <= iStack_34)) &&
               ((iVar11 < iStack_90 ||
                ((iVar11 == iStack_90 && ((iStack_94 < 0 || (iVar8 < iStack_94)))))))) {
              iStack_98 = iVar2;
              iStack_94 = iVar8;
              iStack_90 = iVar11;
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= iVar7);
      if (0 < iStack_98) {
        lVar18 = func_0x0213fc88(param_3,iStack_90,iStack_30,iStack_34);
        iVar14 = (int)((ulonglong)lVar18 >> 0x20);
        bVar16 = (int)lVar18 != 0;
        if ((int)-(iVar14 + (uint)bVar16) < 0 !=
            (SBORROW4(0,iVar14) != SBORROW4(-iVar14,(uint)bVar16))) {
          bVar15 = 1;
          *param_4 = iStack_98;
          *param_6 = iStack_90;
          *param_5 = lVar18 * 1000;
          goto LAB_0213ef78;
        }
      }
    }
  }
  bVar15 = 0;
LAB_0213ef78:
  func_0x028c98a0(&uStack_60,0);
  func_0x028c98a0(&uStack_50,0);
  func_0x028c98a0(aiStack_44 + 1,0);
  return (uint)bVar15;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$TryGetRange RVA 0x212f1f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0213f1f0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_0213f2f4 + 0x213f210);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213f2f8 + 0x213f224));
    func_0x01384978(*(undefined4 *)(_UNK_0213f2fc + 0x213f230));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xb433,0);
  if (iVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    if ((param_1 != 0) && (*(int *)(param_1 + 0xc) == 2)) {
      uVar4 = 0;
      puVar5 = *(undefined4 **)(_UNK_0213f300 + 0x213f2c0);
      iVar1 = func_0x0364c9b8(param_1,0,*puVar5);
      uVar2 = *puVar5;
      *param_2 = iVar1;
      iVar1 = func_0x0364c9b8(param_1,1,uVar2);
      *param_3 = iVar1;
      if (*param_2 <= iVar1) {
        uVar4 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb433,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021cc06c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$TryBuildTargetMaxLevelMap RVA 0x212f304 =====

/* WARNING: Removing unreachable block (ram,0x0213f940) */
/* WARNING: Removing unreachable block (ram,0x0213f930) */
/* WARNING: Removing unreachable block (ram,0x0213f958) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0213f304(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_0213fb48 + 0x213f328);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213fb4c + 0x213f33c));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb50 + 0x213f348));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb54 + 0x213f354));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb58 + 0x213f360));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb5c + 0x213f36c));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb60 + 0x213f378));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb64 + 0x213f384));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb68 + 0x213f390));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb6c + 0x213f39c));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb70 + 0x213f3a8));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb74 + 0x213f3b4));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb78 + 0x213f3c0));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb7c + 0x213f3cc));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb80 + 0x213f3d8));
    func_0x01384978(*(undefined4 *)(_UNK_0213fb84 + 0x213f3e4));
    *pcVar8 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_44 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_50 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iStack_3c = 0;
  iStack_54 = 0;
  iStack_58 = 0;
  iStack_5c = 0;
  uStack_60 = 0;
  iVar1 = func_0x0229f06c(0xb434,0);
  if (iVar1 == 0) {
    piVar9 = *(int **)(_UNK_0213fb88 + 0x213f494);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar9;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar1,&iStack_28,**(undefined4 **)(_UNK_0213fb8c + 0x213f4d0));
    if (*(int *)(**(int **)(_UNK_0213fb90 + 0x213f4e4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(&uStack_70,iVar1,&iStack_3c,**(undefined4 **)(_UNK_0213fb94 + 0x213f51c));
    iVar1 = iStack_28;
    uStack_34 = uStack_6c;
    uStack_38 = uStack_70;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    func_0x0245055c(iVar1,**(undefined4 **)(_UNK_0213fb98 + 0x213f558));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = iStack_3c;
    iVar1 = *(int *)(iVar1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e6c128(iVar1,iVar5,4,0);
    iVar1 = iStack_3c;
    if (iStack_3c == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_70,iVar1,**(undefined4 **)(_UNK_0213fb9c + 0x213f5bc));
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    uStack_48 = uStack_68;
    piStack_44 = piStack_64;
    piVar9 = *(int **)(_UNK_0213fba0 + 0x213f5e8);
    piVar10 = *(int **)(_UNK_0213fba4 + 0x213f5f0);
LAB_0213f5ec:
    iVar1 = func_0x03f5f428(&uStack_50,**(undefined4 **)(_UNK_0213fba8 + 0x213f5f8));
    piVar4 = piStack_44;
    if (iVar1 != 0) {
      if (piStack_44 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(**(int **)(_UNK_0213fbac + 0x213f620) + 0xb8);
        if (((uVar2 <= *(byte *)(*piStack_44 + 0xb8)) &&
            (*(int *)(*(int *)(*piStack_44 + 100) + uVar2 * 4 + -4) ==
             **(int **)(_UNK_0213fbac + 0x213f620))) &&
           (iVar1 = func_0x01e6c8d0(piStack_44[10],0x4d,0), iVar1 != 0)) {
          iVar1 = *piVar4;
          uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_0213fbb0 + 0x213f670)) {
                puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xf0);
                goto LAB_0213f6c0;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0213fbb0 + 0x213f670),6);
LAB_0213f6c0:
          piVar4 = (int *)(*(code *)*puVar3)(piVar4,puVar3[1]);
          if (piVar4 != (int *)0x0) {
            iVar1 = 0;
            do {
              iVar5 = *piVar4;
              uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar9) {
                    puVar3 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                    goto LAB_0213f730;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar4,*piVar9,0);
LAB_0213f730:
              iVar5 = (*(code *)*puVar3)(piVar4,puVar3[1]);
              if (iVar5 <= iVar1) break;
              iVar5 = *piVar4;
              uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar10) {
                    puVar3 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
                    goto LAB_0213f798;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar4,*piVar10,0);
LAB_0213f798:
              iVar5 = (*(code *)*puVar3)(piVar4,iVar1,puVar3[1]);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar5 = *(int *)(iVar5 + 8);
              if (0 < iVar5) {
                iVar6 = func_0x01c24918(0);
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                iVar6 = *(int *)(iVar6 + 0x58);
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                iVar6 = func_0x01dc688c(iVar6,iVar5,&uStack_60,&iStack_54,0);
                if (iVar6 != 0) {
                  iVar6 = func_0x01c24918(0);
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  iVar6 = *(int *)(iVar6 + 0x50);
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x01db1798(iVar6,iVar5,&iStack_58,&iStack_5c,0);
                  if (((param_1 <= iStack_54) && (iStack_54 <= param_2)) &&
                     ((0 < iStack_58 && (-1 < iStack_5c)))) {
                    func_0x0213fe78(param_3);
                    iVar5 = iStack_58;
                    if (param_4 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x02450560(param_4,iVar5,**(undefined4 **)(_UNK_0213fbb4 + 0x213f8a8));
                    iVar6 = iStack_28;
                    iVar5 = iStack_58;
                    if (iStack_28 == 0) {
                      func_0x01384bf0();
                    }
                    iVar5 = func_0x02450560(iVar6,iVar5,**(undefined4 **)(_UNK_0213fbb8 + 0x213f8d4)
                                           );
                    if (iVar5 != 0) {
                      func_0x0213ffc8(iStack_58,param_3,param_5);
                    }
                  }
                }
              }
              iVar1 = iVar1 + 1;
            } while( true );
          }
        }
      }
      goto LAB_0213f5ec;
    }
    func_0x03f5f424(&uStack_50,**(undefined4 **)(_UNK_0213fbbc + 0x213f91c));
    func_0x028c98a0(&uStack_38,0);
    func_0x028c98a0(&uStack_30,0);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d59a74(param_3,**(undefined4 **)(_UNK_0213fbc4 + 0x213f994));
    uVar2 = 0;
    if (0 < iVar1) {
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb434,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229d1c4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar2 & 1;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$GetTidAtLevel RVA 0x212fbc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0213fbc8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  int extraout_r3;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  longlong lVar8;
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
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_0213fc7c + 0x213fbe0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213fc80 + 0x213fbf4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb438,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb438,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = **(undefined4 **)(_UNK_0213fc84 + 0x213fc70);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(iVar1 + 0xc))) {
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar1 + 0xc) <= param_2) {
      func_0x02457d5c();
    }
    return *(int *)(iVar1 + param_2 * 4 + 0x10);
  }
  func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
  uVar4 = func_0x02457d58();
  uVar2 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
  func_0x047901e8(uVar4,uVar2,0);
  func_0x02457d90(uVar4,uVar7);
  lVar8 = func_0x02457d94();
  uVar3 = (uint)((ulonglong)lVar8 >> 0x20);
  pcVar6 = (char *)(iRam0364cb28 + 0x364ca68);
  uStack_28 = uVar7;
  uStack_24 = uVar4;
  if (*pcVar6 == '\0') {
    func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
    *pcVar6 = '\x01';
  }
  if ((-1 < lVar8) && ((int)uVar3 < *(int *)((int)lVar8 + 0xc))) {
    func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                    *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
    iVar1 = *(int *)((int)lVar8 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar3) {
      func_0x02457d5c();
    }
    iVar1 = iVar1 + uVar3 * 4;
    *(undefined4 *)(iVar1 + 0x10) = extraout_r2;
    return iVar1;
  }
  func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
  uVar7 = func_0x02457d58();
  uVar4 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
  func_0x047901e8(uVar7,uVar4,0);
  func_0x02457d90(uVar7,extraout_r3);
  func_0x02457d94();
  return 0;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$CalcLifeSeconds RVA 0x212fc88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0213fc88(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pcVar5 = (char *)(_UNK_0213fe58 + 0x213fcac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213fe5c + 0x213fcc4));
    func_0x01384978(*(undefined4 *)(_UNK_0213fe60 + 0x213fcd0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb439,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      pcVar5 = *(char **)(iVar1 + 0xc);
    }
    if (iVar1 != 0 && pcVar5 != (char *)0x0) {
      if ((pcVar5 == (char *)0x1) || (param_4 - param_3 < 1)) {
        pcVar4 = (char *)0x0;
        puVar3 = *(undefined4 **)(_UNK_0213fe64 + 0x213fe24);
      }
      else {
        if (param_2 < param_4) {
          fVar6 = (float)VectorSignedToFloat(param_4 - param_3,(byte)(in_fpscr >> 0x16) & 3);
          pcVar4 = (char *)(_UNK_0213fe68 + 0x213fd8c);
          fVar7 = (float)VectorSignedToFloat(param_2 - param_3,(byte)(in_fpscr >> 0x16) & 3);
          fVar8 = (float)VectorSignedToFloat(pcVar5,(byte)(in_fpscr >> 0x16) & 3);
          if (*pcVar4 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_0213fe6c + 0x213fdb0));
            *pcVar4 = '\x01';
          }
          if (*(int *)(**(int **)(_UNK_0213fe70 + 0x213fdc8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          fVar6 = (float)func_0x02450364((fVar7 / fVar6) * fVar8);
          pcVar4 = (char *)(int)fVar6;
          if (fVar6 == _UNK_0213fe54) {
            pcVar4 = (char *)0x80000000;
          }
          if ((int)pcVar4 < 0) {
            pcVar4 = (char *)0x0;
          }
          else if ((int)(pcVar5 + -1) < (int)pcVar4) {
            pcVar4 = pcVar5 + -1;
          }
        }
        else {
          pcVar4 = pcVar5 + -1;
        }
        puVar3 = *(undefined4 **)(_UNK_0213fe74 + 0x213fe3c);
      }
      uVar2 = func_0x0364c9b8(iVar1,pcVar4,*puVar3);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb439,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229d2dc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$UpdateMaxLevel RVA 0x212fe78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213fe78(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_0213ffb0 + 0x213fe98);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213ffb4 + 0x213feac));
    func_0x01384978(*(undefined4 *)(_UNK_0213ffb8 + 0x213feb8));
    *pcVar2 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0xb435,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x03d5bb20(0,param_2,&iStack_1c,**(undefined4 **)(_UNK_0213ffbc + 0x213ff6c));
      if ((iVar1 != 0) && (param_3 <= iStack_1c)) {
        return;
      }
      func_0x01384bf0();
    }
    else {
      iVar1 = func_0x03d5bb20(param_1,param_2,&iStack_1c,
                              **(undefined4 **)(_UNK_0213ffc0 + 0x213ff34));
      if ((iVar1 != 0) && (param_3 <= iStack_1c)) {
        return;
      }
    }
    func_0x03d59d54(param_1,param_2,param_3,**(undefined4 **)(_UNK_0213ffc4 + 0x213ffa0));
  }
  else {
    iVar1 = func_0x0229f13c(0xb435,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$AppendRecursiveCareGraph RVA 0x212ffc8 =====

/* WARNING: Removing unreachable block (ram,0x02140618) */
/* WARNING: Removing unreachable block (ram,0x02140698) */
/* WARNING: Removing unreachable block (ram,0x02140624) */
/* WARNING: Removing unreachable block (ram,0x0214062c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213ffc8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_34 [4];
  
  pcVar6 = (char *)(_UNK_02140854 + 0x213ffe8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02140858 + 0x213fffc));
    func_0x01384978(*(undefined4 *)(_UNK_0214085c + 0x2140008));
    func_0x01384978(*(undefined4 *)(_UNK_02140860 + 0x2140014));
    func_0x01384978(*(undefined4 *)(_UNK_02140864 + 0x2140020));
    func_0x01384978(*(undefined4 *)(_UNK_02140868 + 0x214002c));
    func_0x01384978(*(undefined4 *)(_UNK_0214086c + 0x2140038));
    func_0x01384978(*(undefined4 *)(_UNK_02140870 + 0x2140044));
    func_0x01384978(*(undefined4 *)(_UNK_02140874 + 0x2140050));
    func_0x01384978(*(undefined4 *)(_UNK_02140878 + 0x214005c));
    func_0x01384978(*(undefined4 *)(_UNK_0214087c + 0x2140068));
    func_0x01384978(*(undefined4 *)(_UNK_02140880 + 0x2140074));
    func_0x01384978(*(undefined4 *)(_UNK_02140884 + 0x2140080));
    func_0x01384978(*(undefined4 *)(_UNK_02140888 + 0x214008c));
    func_0x01384978(*(undefined4 *)(_UNK_0214088c + 0x2140098));
    func_0x01384978(*(undefined4 *)(_UNK_02140890 + 0x21400a4));
    func_0x01384978(*(undefined4 *)(_UNK_02140894 + 0x21400b0));
    *pcVar6 = '\x01';
  }
  aiStack_34[3] = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  iVar1 = func_0x0229f06c(0xb436,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(_UNK_02140898 + 0x2140134);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(aiStack_34 + 1,iVar1,aiStack_34 + 3,**(undefined4 **)(_UNK_0214089c + 0x2140170)
                   );
    piVar7 = *(int **)(_UNK_021408a0 + 0x2140184);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_50,iVar1,aiStack_34,**(undefined4 **)(_UNK_021408a4 + 0x21401b8));
    iVar1 = aiStack_34[3];
    uStack_3c = uStack_4c;
    uStack_40 = uStack_50;
    if (aiStack_34[3] == 0) {
      func_0x01384bf0();
    }
    func_0x0245055c(iVar1,**(undefined4 **)(_UNK_021408a8 + 0x21401f4));
    iVar1 = aiStack_34[0];
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    iVar3 = aiStack_34[0];
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar3 + 8);
    uVar10 = *(uint *)(iVar3 + 0xc);
    piVar7 = *(int **)(_UNK_021408ac + 0x2140254);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    iVar9 = *piVar7;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar10 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar10 + 1;
      *(undefined4 *)(iVar1 + uVar10 * 4 + 0x10) = param_1;
    }
    else {
      func_0x0325970c(iVar3,param_1,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
      ;
    }
    while( true ) {
      iVar1 = aiStack_34[0];
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) break;
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
        iVar1 = iRam0000000c;
        iVar3 = aiStack_34[0];
        if (aiStack_34[0] == 0) {
          func_0x01384bf0();
          iVar3 = 0;
        }
      }
      else {
        iVar1 = *(int *)(aiStack_34[0] + 0xc);
        iVar3 = aiStack_34[0];
      }
      uVar2 = func_0x03259410(iVar3,iVar1 + -1,**(undefined4 **)(_UNK_021408b0 + 0x21402fc));
      iVar3 = aiStack_34[0];
      if (aiStack_34[0] == 0) {
        func_0x01384bf0();
      }
      func_0x0325b170(iVar3,iVar1 + -1,**(undefined4 **)(_UNK_021408b4 + 0x2140328));
      iVar1 = aiStack_34[3];
      if (aiStack_34[3] == 0) {
        func_0x01384bf0();
      }
      puVar8 = *(undefined4 **)(_UNK_021408b8 + 0x2140350);
      iVar1 = func_0x02450560(iVar1,uVar2,*puVar8);
      if (iVar1 != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x01dd1b54(iVar1,uVar2,0);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 0x28);
        }
        if (iVar3 != 0 && iVar1 != 0) {
          piVar7 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_021408bc + 0x21403b8));
LAB_021403c0:
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar7;
          uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar10 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(_UNK_021408cc + 0x21403dc)) {
                puVar4 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto LAB_02140424;
              }
              uVar10 = uVar10 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_021408cc + 0x21403dc),0);
LAB_02140424:
          iVar1 = (*(code *)*puVar4)(piVar7,puVar4[1]);
          if (iVar1 != 0) {
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar7;
            uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar10 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(_UNK_021408c0 + 0x2140458)) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto LAB_021404a0;
                }
                uVar10 = uVar10 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar10 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_021408c0 + 0x2140458),0);
LAB_021404a0:
            uVar2 = (*(code *)*puVar4)(piVar7,puVar4[1]);
            iVar1 = func_0x021408d8(uVar2,&uStack_44);
            if (iVar1 != 0) {
              FUN_0213fe78(param_2,uVar2,uStack_44);
            }
            if (param_3 == 0) {
              func_0x01384bf0();
            }
            func_0x02450560(param_3,uVar2,*puVar8);
            iVar1 = aiStack_34[3];
            if (aiStack_34[3] == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x02450564(iVar1,uVar2,**(undefined4 **)(_UNK_021408c4 + 0x214050c));
            iVar1 = aiStack_34[0];
            if (iVar3 == 0) {
              if (aiStack_34[0] == 0) {
                func_0x01384bf0();
              }
              iVar3 = *(int *)(iVar1 + 8);
              uVar10 = *(uint *)(iVar1 + 0xc);
              piVar5 = *(int **)(_UNK_021408c8 + 0x2140550);
              *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
              iVar9 = *piVar5;
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              if (uVar10 < *(uint *)(iVar3 + 0xc)) {
                *(uint *)(iVar1 + 0xc) = uVar10 + 1;
                *(undefined4 *)(iVar3 + uVar10 * 4 + 0x10) = uVar2;
              }
              else {
                func_0x0325970c(iVar1,uVar2,
                                *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
              }
            }
            goto LAB_021403c0;
          }
          if (piVar7 != (int *)0x0) {
            iVar1 = *piVar7;
            uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar10 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(_UNK_021408d0 + 0x21405b8)) {
                  puVar8 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto LAB_02140600;
                }
                uVar10 = uVar10 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_021408d0 + 0x21405b8),0);
LAB_02140600:
            (*(code *)*puVar8)(piVar7,puVar8[1]);
          }
        }
      }
    }
    func_0x028c98a0(&uStack_40,0);
    func_0x028c98a0(aiStack_34 + 1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb436,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a5180(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.FrozenItemMergeBonusHandler$$TryGetCategoryMaxLevel RVA 0x21308d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021408d8(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_021409c4 + 0x21408f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021409c8 + 0x2140904));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb437,0);
  if (iVar1 == 0) {
    *param_2 = 0;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar5 = func_0x01db1884(iVar1,param_1,0);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x44);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      uVar2 = (uint)(0 < iVar1);
      if (0 < iVar1) {
        *param_2 = iVar1 + -1;
      }
    }
    return uVar2;
  }
  iVar1 = func_0x0229f13c(0xb437,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_28 = uStack_40;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  func_0x01485238(&uStack_38,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485238(&uStack_38,param_1,0);
  func_0x014852b8(&uStack_38,0,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,1,0);
  iVar1 = func_0x0245498c(&uStack_38,0,0);
  *param_2 = iVar1;
  uVar2 = func_0x0245496c(&uStack_38,1,0);
  return uVar2;
}


