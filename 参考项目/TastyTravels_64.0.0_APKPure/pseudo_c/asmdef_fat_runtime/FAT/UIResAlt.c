/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.UIResAlt$$Replace RVA 0x2b51c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b61c14(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  bool bVar7;
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
  
  pcVar5 = (char *)(_UNK_02b61cdc + 0x2b61c2c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61ce0 + 0x2b61c40));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x30a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0467229c(param_2,0);
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_02b61ce4 + 0x2b61cb0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_2 = func_0x025550ec(param_2,0);
    pcVar5 = (char *)(_UNK_02b63e0c + 0x2b63ce0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b63e10 + 0x2b63cf4));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x30b,0);
    if (iVar1 == 0) {
      if (param_2 != 0) {
        bVar7 = *(int *)(param_2 + 8) != 0;
        iVar1 = 0;
        if (bVar7) {
          iVar1 = *(int *)(param_2 + 0xc);
        }
        if (bVar7 && iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01ef5248(iVar1,param_2,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 8);
            iVar3 = *(int *)(param_1 + 0xc);
            if (iVar3 != iVar1) {
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              uVar4 = 0;
              iVar1 = func_0x0229f06c(0x30d,0,0,0);
              if (iVar1 == 0) {
                uVar2 = 0;
                if (param_2 != 0) {
                  uVar4 = *(undefined4 *)(param_2 + 8);
                  uVar2 = *(undefined4 *)(param_2 + 0xc);
                }
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                func_0x01ef5640(iVar3,uVar4,uVar2,0);
              }
              else {
                iVar1 = func_0x0229f13c(0x30d,0);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                uStack_20 = 0;
                func_0x02175630(iVar1,iVar3,param_2,0);
              }
              return;
            }
            uVar6 = *(undefined4 *)(param_2 + 8);
            uVar2 = *(undefined4 *)(param_2 + 0xc);
            uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02b63e14 + 0x2b63dd8));
            uStack_20 = 0;
            func_0x01ef51d0(uVar4,uVar2,uVar6,iVar1);
            *(undefined4 *)(param_1 + 0xc) = uVar4;
          }
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x30b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x30a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.UIResAlt$$.ctor RVA 0x2b53ca4 =====

void FUN_02b63ca4(int param_1,undefined4 param_2)

{
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.UIResAlt$$Replace RVA 0x2b53cc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b63cc4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  bool bVar7;
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
  
  pcVar5 = (char *)(_UNK_02b63e0c + 0x2b63ce0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b63e10 + 0x2b63cf4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x30b,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      bVar7 = *(int *)(param_2 + 8) != 0;
      iVar1 = 0;
      if (bVar7) {
        iVar1 = *(int *)(param_2 + 0xc);
      }
      if (bVar7 && iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01ef5248(iVar1,param_2,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 8);
          iVar3 = *(int *)(param_1 + 0xc);
          if (iVar3 != iVar1) {
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar4 = 0;
            iVar1 = func_0x0229f06c(0x30d,0,0,0);
            if (iVar1 == 0) {
              uVar2 = 0;
              if (param_2 != 0) {
                uVar4 = *(undefined4 *)(param_2 + 8);
                uVar2 = *(undefined4 *)(param_2 + 0xc);
              }
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              func_0x01ef5640(iVar3,uVar4,uVar2,0);
            }
            else {
              iVar1 = func_0x0229f13c(0x30d,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_20 = 0;
              func_0x02175630(iVar1,iVar3,param_2,0);
            }
            return;
          }
          uVar6 = *(undefined4 *)(param_2 + 8);
          uVar2 = *(undefined4 *)(param_2 + 0xc);
          uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02b63e14 + 0x2b63dd8));
          uStack_20 = 0;
          func_0x01ef51d0(uVar4,uVar2,uVar6,iVar1);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x30b,0);
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


