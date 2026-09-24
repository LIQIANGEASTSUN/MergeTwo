
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cc5414(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01cc595c + 0x1cc5428);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc5960 + 0x1cc543c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5964 + 0x1cc5448));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5968 + 0x1cc5454));
    func_0x01438628(*(undefined4 *)(_UNK_01cc596c + 0x1cc5460));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5970 + 0x1cc546c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5974 + 0x1cc5478));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5978 + 0x1cc5484));
    func_0x01438628(*(undefined4 *)(_UNK_01cc597c + 0x1cc5490));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5980 + 0x1cc549c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5984 + 0x1cc54a8));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5988 + 0x1cc54b4));
    func_0x01438628(*(undefined4 *)(_UNK_01cc598c + 0x1cc54c0));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5990 + 0x1cc54cc));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5994 + 0x1cc54d8));
    func_0x01438628(*(undefined4 *)(_UNK_01cc5998 + 0x1cc54e4));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x1a8e,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01cc599c + 0x1cc5560) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar4 = 0;
      iVar1 = func_0x02c35d10(0x31,0);
      if ((iVar1 != 0) && (iVar1 = FUN_01cc522c(param_1), iVar1 == 0)) {
        iVar1 = FUN_01cc28c8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar1 + 0xc) == '\0') {
          if (*(int *)(**(int **)(_UNK_01cc59a0 + 0x1cc55c8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cc59a4 + 0x1cc55e4));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x14);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_01cc59a8 + 0x1cc5618));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar1 + 0x10);
          iVar1 = FUN_01cc28c8(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar10 = *(uint *)(iVar1 + 0x18);
          iVar1 = *(int *)(iVar1 + 0x1c);
          if (*(int *)(**(int **)(_UNK_01cc59ac + 0x1cc565c) + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar9 = iVar7 * 60000;
          iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01cc59b0 + 0x1cc5680));
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uVar4 = 0;
          uVar12 = func_0x026ffbe0(iVar7,0);
          iVar1 = iVar1 - ((int)((ulonglong)uVar12 >> 0x20) + (uint)(uVar10 < (uint)uVar12));
          bVar11 = uVar9 < uVar10 - (uint)uVar12;
          iVar7 = (int)uVar9 >> 0x1f;
          if ((int)(iVar7 - (iVar1 + (uint)bVar11)) < 0 !=
              (SBORROW4(iVar7,iVar1) != SBORROW4(iVar7 - iVar1,(uint)bVar11))) {
            if (*(int *)(**(int **)(_UNK_01cc59b4 + 0x1cc56c4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01cc59b8 + 0x1cc56e0));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x020e9710(iVar1,0);
            iVar7 = FUN_01cc28c8(param_1);
            if (iVar1 == 0) {
              uVar4 = 1;
            }
            else {
              uVar4 = *(undefined4 *)(iVar1 + 0x120);
            }
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            func_0x026a81b8(iVar7,uVar4,0);
            iVar1 = FUN_01cc28c8(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x026a7c44(iVar1,1,0);
            iVar1 = FUN_01cc28c8(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x026a8040(iVar1,1,0);
            FUN_01cc31f4(param_1);
            func_0x01cc59d8(param_1);
            if (*(int *)(**(int **)(_UNK_01cc59bc + 0x1cc57a4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cc59c0 + 0x1cc57c0));
            piVar5 = *(int **)(_UNK_01cc59c4 + 0x1cc57d4);
            iVar7 = *piVar5;
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
              iVar7 = *piVar5;
            }
            piVar5 = *(int **)(_UNK_01cc59c8 + 0x1cc57f4);
            iVar8 = *piVar5;
            uVar4 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xb24);
            iVar7 = *(int *)(iVar8 + 0x1c);
            if (iVar7 == 0) {
              func_0x014909d8(iVar8);
              iVar7 = *(int *)(iVar8 + 0x1c);
            }
            iVar7 = *(int *)(iVar7 + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            uVar2 = **(undefined4 **)(iVar7 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x02b0c90c(iVar1,uVar4,uVar2,0);
            if (*(int *)(**(int **)(_UNK_01cc59cc + 0x1cc5884) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cc59d0 + 0x1cc58a0));
            piVar6 = *(int **)(_UNK_01cc59d4 + 0x1cc58b4);
            iVar7 = *piVar6;
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
              iVar7 = *piVar6;
            }
            iVar8 = *piVar5;
            uVar4 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x230);
            iVar7 = *(int *)(iVar8 + 0x1c);
            if (iVar7 == 0) {
              func_0x014909d8(iVar8);
              iVar7 = *(int *)(iVar8 + 0x1c);
            }
            iVar7 = *(int *)(iVar7 + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            uVar2 = **(undefined4 **)(iVar7 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x029901b4(iVar1,uVar4,uVar2,0);
            uVar4 = 1;
          }
        }
      }
    }
    return uVar4;
  }
  iVar1 = func_0x029540a4(0x1a8e,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar7,uVar4,&uStack_30,uVar2,0,0);
  uVar4 = func_0x024f56e0(&uStack_30,0,0);
  return uVar4;
}

