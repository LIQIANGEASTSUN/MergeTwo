/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ScoreMicDisposeBonusHandler$$FAT.Merge.IDisposeBonusHandler.get_priority RVA 0x20fc788 =====

undefined4 FUN_0210c788(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb327,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb327,0);
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



// ===== FAT.Merge.ScoreMicDisposeBonusHandler$$get__isValid RVA 0x20fc7dc =====

undefined4 FUN_0210c7dc(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0xb328,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[3];
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
    iVar1 = func_0x0229f13c(0xb328,0);
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



// ===== FAT.Merge.ScoreMicDisposeBonusHandler$$.ctor RVA 0x20fc848 =====

void FUN_0210c848(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.Merge.ScoreMicDisposeBonusHandler$$FAT.Merge.IDisposeBonusHandler.Process RVA 0x20fc864 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210c864(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_0210cc68 + 0x210c880);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210cc6c + 0x210c894));
    func_0x01384978(*(undefined4 *)(_UNK_0210cc70 + 0x210c8a0));
    func_0x01384978(*(undefined4 *)(_UNK_0210cc74 + 0x210c8ac));
    func_0x01384978(*(undefined4 *)(_UNK_0210cc78 + 0x210c8b8));
    func_0x01384978(*(undefined4 *)(_UNK_0210cc7c + 0x210c8c4));
    func_0x01384978(*(undefined4 *)(_UNK_0210cc80 + 0x210c8d0));
    func_0x01384978(*(undefined4 *)(_UNK_0210cc84 + 0x210c8dc));
    func_0x01384978(*(undefined4 *)(_UNK_0210cc88 + 0x210c8e8));
    func_0x01384978(*(undefined4 *)(_UNK_0210cc8c + 0x210c8f4));
    *pcVar4 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xb329,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0210c7dc(param_1);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_2 + 0xc);
      if (iVar1 != 0) {
        pcVar4 = *(char **)(param_2 + 0x10);
      }
      if ((iVar1 != 0 && pcVar4 != (char *)0x0) &&
         (((0x11 < *(uint *)(param_2 + 0x14) ||
           ((1 << (*(uint *)(param_2 + 0x14) & 0xff) & 0x20807U) == 0)) &&
          (iVar2 = func_0x02feb690(iVar1,&iStack_24,1,**(undefined4 **)(_UNK_0210cc90 + 0x210c9c8)),
          iVar10 = iStack_24, iVar2 != 0)))) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0210ccb4(iVar10);
        iVar10 = iStack_24;
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0xc);
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          uVar6 = *(undefined4 *)(iVar10 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x02756fa0(iVar2,uVar6,&iStack_28,0);
          iVar10 = iStack_24;
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          iVar9 = *(int *)(iVar10 + 0x18);
          iVar10 = iStack_28;
          if (iVar2 == 0) {
            iVar10 = 1;
          }
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar3 = iStack_24;
          iVar2 = *(int *)(iVar2 + 0x40);
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          piVar11 = *(int **)(_UNK_0210cc94 + 0x210ca90);
          uVar6 = *(undefined4 *)(iVar3 + 0x14);
          iVar3 = *piVar11;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar11;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x2a4);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x01cdcbac(iVar2,uVar6,iVar10 * iVar9,uVar7,0,0,0,0x2e,
                                  **(undefined4 **)(_UNK_0210cc98 + 0x210cad0),
                                  **(undefined4 **)(_UNK_0210cc9c + 0x210cadc),0);
          iVar1 = func_0x0210cd28(iVar1);
          if (iVar1 == 0) {
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_0210cca4 + 0x210cb80));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar7 = *(undefined4 *)(iVar1 + 0x10);
            uVar5 = *(undefined4 *)(iVar1 + 0x14);
            iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_0210cca8 + 0x210cba0));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar8 = *(undefined4 *)(iVar1 + 0x10);
            if (*(int *)(**(int **)(_UNK_0210ccac + 0x210cbc8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x02451750(uVar8,uVar7,uVar5,0,&uStack_38,0);
          }
          else {
            func_0x0210cd7c(&uStack_48,pcVar4);
            uVar5 = uStack_44;
            uVar7 = uStack_48;
            if (*(int *)(**(int **)(_UNK_0210cca0 + 0x210cb34) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x01dd876c(&uStack_48,uVar7,uVar5,0);
            uStack_38 = uStack_48;
            uStack_34 = uStack_44;
            uStack_30 = uStack_40;
          }
          uVar8 = uStack_30;
          uVar5 = uStack_34;
          uVar7 = uStack_38;
          if (*(int *)(**(int **)(_UNK_0210ccb0 + 0x210cc10) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0206de24(uVar6,uVar7,uVar5,uVar8,0,0,0,0);
          iVar1 = iStack_24;
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          func_0x0210cdf0(iVar1);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb329,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ScoreMicDisposeBonusHandler$$FAT.Merge.IDisposeBonusHandler.OnRegister RVA 0x20fce78 =====

void FUN_0210ce78(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb32b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb32b,0);
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



// ===== FAT.Merge.ScoreMicDisposeBonusHandler$$FAT.Merge.IDisposeBonusHandler.OnUnRegister RVA 0x20fcec4 =====

void FUN_0210cec4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb32c,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb32c,0);
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


