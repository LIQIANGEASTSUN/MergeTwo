/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.BubbleMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.get_priority RVA 0x212d328 =====

undefined4 FUN_0213d328(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb424,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb424,0);
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
  return 0x66;
}



// ===== FAT.Merge.BubbleMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.Process RVA 0x212d37c =====

void FUN_0213d37c(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb425,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb425,0);
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
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    func_0x01384bf0();
  }
  func_0x0213d404(param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14),0);
  return;
}



// ===== FAT.Merge.BubbleMergeBonusHandler$$_CheckSpawnBubble RVA 0x212d404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0213d404(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  
  pcVar10 = (char *)(_UNK_0213d76c + 0x213d424);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213d770 + 0x213d43c));
    func_0x01384978(*(undefined4 *)(_UNK_0213d774 + 0x213d448));
    func_0x01384978(*(undefined4 *)(_UNK_0213d778 + 0x213d454));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb426,0);
  if (iVar1 == 0) {
    piVar3 = (int *)func_0x021566f4(0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    piVar11 = *(int **)(_UNK_0213d77c + 0x213d4d4);
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar7 = *piVar11;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar7) {
          puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 200);
          goto LAB_0213d51c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar7,1);
LAB_0213d51c:
    iVar1 = (*(code *)*puVar4)(piVar3,0,puVar4[1]);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_0210e2d4(param_3,0);
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      iVar7 = *piVar11;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == iVar7) {
            puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x108);
            goto LAB_0213d5bc;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar7,9);
LAB_0213d5bc:
      iVar1 = (*(code *)*puVar4)(piVar3,uVar2,puVar4[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (0 < iVar1) {
        uVar5 = **(undefined4 **)(_UNK_0213d780 + 0x213d5f8);
        if (*(int *)(**(int **)(_UNK_0213d784 + 0x213d608) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = 0;
        iVar1 = func_0x028d4310(iVar1,0);
        if (iVar1 != 0) {
          iVar1 = 0;
          while( true ) {
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            if ((int)*(uint *)(param_2 + 0xc) <= (int)uVar8) break;
            if (*(uint *)(param_2 + 0xc) <= uVar8) {
              func_0x01384bf4();
            }
            iVar7 = *(int *)(param_2 + 0x10 + uVar8 * 4);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            if ((*(int *)(iVar7 + 8) != 0) &&
               (iVar6 = func_0x021689a4(*(int *)(iVar7 + 8),0), iVar6 != 0)) {
              if (param_3 == 0) {
                func_0x01384bf0();
              }
              iVar6 = FUN_0210e2d4(param_3,0);
              iVar7 = *(int *)(iVar7 + 8);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              iVar7 = FUN_0210e2d4(iVar7,0);
              if (iVar6 == iVar7) goto LAB_0213d760;
              iVar1 = iVar1 + 1;
            }
            uVar8 = uVar8 + 1;
          }
          iVar7 = func_0x01c24918(0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar7 + 0xc);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar7 + 8);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (iVar1 < *(int *)(iVar7 + 0x1cc)) {
            if (param_3 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_0210cd28(param_3,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar2 = FUN_020ee33c(iVar1,param_3,uVar2,uVar5,0);
            return uVar2;
          }
        }
      }
    }
LAB_0213d760:
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0xb426,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229d080(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.BubbleMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.OnRegister RVA 0x212d788 =====

void FUN_0213d788(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb427,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb427,0);
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



// ===== FAT.Merge.BubbleMergeBonusHandler$$FAT.Merge.IMergeBonusHandler.OnUnRegister RVA 0x212d7d4 =====

void FUN_0213d7d4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb428,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb428,0);
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



// ===== FAT.Merge.BubbleMergeBonusHandler$$.ctor RVA 0x212d820 =====

void FUN_0213d820(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


