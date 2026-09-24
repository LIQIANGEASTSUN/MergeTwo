
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cd0b20(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  undefined8 uVar12;
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
  
  pcVar4 = (char *)(_UNK_01cd0e80 + 0x1cd0b34);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cd0e84 + 0x1cd0b48));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0e88 + 0x1cd0b54));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0e8c + 0x1cd0b60));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0e90 + 0x1cd0b6c));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0e94 + 0x1cd0b78));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0e98 + 0x1cd0b84));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0e9c + 0x1cd0b90));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0ea0 + 0x1cd0b9c));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0xaff4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xaff4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_01cca6e4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_01ccc5a4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar1 + 0xc) != '\0') {
      iVar1 = FUN_01ccc5a4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x38) != 0) {
        iVar1 = FUN_01ccc5a4(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar1 + 0x58) == '\0') {
          if (*(int *)(**(int **)(_UNK_01cd0ea4 + 0x1cd0c74) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cd0ea8 + 0x1cd0c90));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar5 = 0;
          uVar12 = func_0x026ffbe0(iVar1,0);
          iVar6 = (int)((ulonglong)uVar12 >> 0x20);
          iVar1 = FUN_01ccc5a4(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar1 + 0x2c);
          bVar11 = *(uint *)(iVar1 + 0x28) < (uint)uVar12;
          if (((int)(iVar2 - (iVar6 + (uint)bVar11)) < 0 ==
               (SBORROW4(iVar2,iVar6) != SBORROW4(iVar2 - iVar6,(uint)bVar11))) &&
             (iVar1 = func_0x01cd0ec4(param_1), iVar1 != 0)) {
            piVar10 = *(int **)(_UNK_01cd0eac + 0x1cd0d00);
            if (*(int *)(*piVar10 + 0x74) == 0) {
              func_0x014387a4();
            }
            puVar9 = *(undefined4 **)(_UNK_01cd0eb0 + 0x1cd0d1c);
            iVar1 = func_0x014e9518(*puVar9);
            piVar7 = *(int **)(_UNK_01cd0eb4 + 0x1cd0d30);
            iVar6 = *piVar7;
            if (*(int *)(iVar6 + 0x74) == 0) {
              func_0x014387a4();
              iVar6 = *piVar7;
            }
            uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xd34);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar3 = func_0x0374c388(iVar1,uVar5,**(undefined4 **)(_UNK_01cd0eb8 + 0x1cd0d68));
            if (*(int *)(**(int **)(_UNK_01cd0ebc + 0x1cd0d80) + 0x74) == 0) {
              func_0x014387a4();
            }
            uVar5 = 0;
            iVar1 = func_0x024ef144(uVar3,0,0);
            if (iVar1 == 0) {
              if (*(int *)(*piVar10 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(*puVar9);
              iVar6 = *piVar7;
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x014387a4();
                iVar6 = *piVar7;
              }
              iVar8 = **(int **)(_UNK_01cd0ec0 + 0x1cd0df0);
              iVar2 = *(int *)(iVar8 + 0x1c);
              uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xd34);
              if (iVar2 == 0) {
                func_0x014909d8(iVar8);
                iVar2 = *(int *)(iVar8 + 0x1c);
              }
              iVar6 = *(int *)(iVar2 + 8);
              if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
                iVar6 = func_0x0149097c();
              }
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
              if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
                iVar6 = func_0x0149097c();
              }
              uVar3 = **(undefined4 **)(iVar6 + 0x5c);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x02b0c90c(iVar1,uVar5,uVar3,0);
              uVar5 = 1;
            }
          }
        }
      }
    }
  }
  return uVar5;
}

