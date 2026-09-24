
/* WARNING: Possible PIC construction at 0x02032284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02032328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0203232c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c5bd50(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
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
  
  iVar3 = func_0x02953fd4(0x5f78,0);
  if (iVar3 == 0) {
    param_1 = *(int *)(param_1 + 0x18);
    if (param_1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_02c5be8c + 0x2c5bddc);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c5be90 + 0x2c5bdf0));
      *pcVar7 = '\x01';
    }
    iVar3 = func_0x02953fd4(0x5f79,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x035e8140(iVar3,**(undefined4 **)(_UNK_02c5be94 + 0x2c5be5c));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      pcVar7 = (char *)(_UNK_0203241c + 0x2032150);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02032420 + 0x2032164),param_2,1,0);
        func_0x01438628(*(undefined4 *)(_UNK_02032424 + 0x2032170));
        func_0x01438628(*(undefined4 *)(_UNK_02032428 + 0x203217c));
        func_0x01438628(*(undefined4 *)(_UNK_0203242c + 0x2032188));
        func_0x01438628(*(undefined4 *)(_UNK_02032430 + 0x2032194));
        func_0x01438628(*(undefined4 *)(_UNK_02032434 + 0x20321a0));
        func_0x01438628(*(undefined4 *)(_UNK_02032438 + 0x20321ac));
        *pcVar7 = '\x01';
      }
      iVar5 = func_0x02953fd4(0x618,0);
      if (iVar5 == 0) {
        if (param_2 != 0) {
          piVar10 = *(int **)(_UNK_0203243c + 0x203221c);
          piVar8 = (int *)(iVar3 + 0x24);
          iVar5 = *piVar8;
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x024eec50(iVar5,0,0);
          if (iVar5 == 0) {
            iVar5 = *piVar8;
            if (*(int *)(*piVar10 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x024ef144(iVar5,0,0);
            if (iVar5 == 0) {
              uVar6 = func_0x024eee28(**(undefined4 **)(_UNK_0203244c + 0x2032350),param_2,
                                      **(undefined4 **)(_UNK_02032448 + 0x2032344),0);
              iVar9 = **(int **)(_UNK_02032450 + 0x2032364);
              iVar5 = *(int *)(iVar9 + 0x1c);
              if (iVar5 == 0) {
                func_0x014909d8(iVar9);
                iVar5 = *(int *)(iVar9 + 0x1c);
              }
              iVar5 = *(int *)(iVar5 + 8);
              if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
                iVar5 = func_0x0149097c();
              }
              if (*(int *)(iVar5 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
              if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
                iVar5 = func_0x0149097c();
              }
              uVar4 = **(undefined4 **)(iVar5 + 0x5c);
              if (*(int *)(**(int **)(_UNK_02032454 + 0x20323c4) + 0x74) == 0) {
                func_0x014387a4(**(int **)(_UNK_02032454 + 0x20323c4));
              }
              func_0x026795f8(uVar6,uVar4,0);
              piVar8 = (int *)(iVar3 + 0x10);
              *piVar8 = 0;
            }
            else {
              iVar5 = *piVar8;
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x024f16cc(iVar5,param_2,1,0);
              func_0x02032458(iVar3);
              if (*(int *)(**(int **)(_UNK_02032444 + 0x20322f0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x0202bb70();
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x0202dc88(iVar5);
              piVar8 = (int *)(iVar3 + 0x14);
              *piVar8 = iVar5;
            }
          }
          else {
            iVar3 = func_0x024eecb8(iVar3,0);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x035e8140(iVar3,**(undefined4 **)(_UNK_02032440 + 0x2032270));
            *piVar8 = iVar3;
          }
          if (*(int *)(_UNK_01408518 + 0x14084d8) == 0) {
            return;
          }
          puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar8 >> 0x11) * 4);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 | 1 << (((uint)piVar8 & 0x1ffff) >> 0xc);
          return;
        }
      }
      else {
        iVar5 = func_0x029540a4(0x618,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x02869ba4(iVar5,iVar3,param_2,1);
      }
      return;
    }
    iVar3 = func_0x029540a4(0x5f79,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar3 = func_0x029540a4(0x5f78,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar6 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
  return;
}

