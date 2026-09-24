
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032a5128(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  pcVar7 = (char *)(_UNK_032a5628 + 0x32a5148);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a562c + 0x32a515c));
    func_0x01438628(*(undefined4 *)(_UNK_032a5630 + 0x32a5168));
    func_0x01438628(*(undefined4 *)(_UNK_032a5634 + 0x32a5174));
    func_0x01438628(*(undefined4 *)(_UNK_032a5638 + 0x32a5180));
    func_0x01438628(*(undefined4 *)(_UNK_032a563c + 0x32a518c));
    func_0x01438628(*(undefined4 *)(_UNK_032a5640 + 0x32a5198));
    func_0x01438628(*(undefined4 *)(_UNK_032a5644 + 0x32a51a4));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1391,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1391,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_028a1df4 + 0x28a1d14);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a1df8 + 0x28a1d28),param_1,0);
      *pcVar7 = '\x01';
    }
    func_0x024f56c0(&uStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&stack0xffffffd0,uVar6,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a1dfc + 0x28a1de4));
    return iVar2;
  }
  iVar2 = FUN_032a4314(param_1);
  fVar1 = _UNK_032a560c;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar10 = *(undefined4 **)(_UNK_032a5648 + 0x32a5224);
    while( true ) {
      iVar8 = func_0x032a8390(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar2) break;
      iVar8 = func_0x032a8390(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x04cfd760(iVar8,iVar2,*puVar10);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0x24) == 1) {
        iVar3 = func_0x032a7be8(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar8 + 0xc) * fVar1;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_3c = (uint)lVar13;
        uStack_40 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar3 = func_0x032a7be8(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar8 + 0x10) * fVar1;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_44 = (uint)lVar13;
        uStack_48 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar3 = func_0x032a7be8(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar3 + 0x50);
        uVar6 = *(undefined4 *)(iVar3 + 0x54);
        if (*(int *)(**(int **)(_UNK_032a564c + 0x32a536c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032a5650 + 0x32a5390));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar14 = func_0x026ffbe0(iVar3,0);
        if (*(int *)(**(int **)(_UNK_032a5654 + 0x32a53c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x02aedf90(uVar9,uVar6,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0);
        iVar4 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        puVar10 = *(undefined4 **)(_UNK_032a5658 + 0x32a5418);
        if (iVar4 == 0) {
          if (*(int *)(**(int **)(_UNK_032a565c + 0x32a5424) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032a5660 + 0x32a5440));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar14 = func_0x026ffbe0(iVar4,0);
          uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
          if (uStack_40 < uVar5 || uVar5 - uStack_40 < (uint)(uStack_3c <= (uint)uVar14)) {
            if (*(int *)(**(int **)(_UNK_032a5664 + 0x32a5480) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032a5668 + 0x32a549c));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar14 = func_0x026ffbe0(iVar4,0);
            uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
            if (uVar5 <= uStack_48 && (uint)(uStack_44 <= (uint)uVar14) <= uVar5 - uStack_48)
            goto LAB_032a54d0;
          }
        }
        else {
LAB_032a54d0:
          if (0 < *(int *)(iVar8 + 0x1c)) {
            iVar4 = func_0x032a7be8(param_1);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = *(int *)(iVar4 + 0x30);
            uVar9 = *(undefined4 *)(iVar8 + 8);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x046c26fc(iVar4,uVar9,**(undefined4 **)(_UNK_032a566c + 0x32a5518));
            if (iVar4 != 0) {
              iVar4 = func_0x032a7be8(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar9 = *(undefined4 *)(iVar8 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x03b70fac(iVar4,uVar9,**(undefined4 **)(_UNK_032a5670 + 0x32a5564));
              if (*(int *)(iVar8 + 0x1c) <= iVar4) {
                iVar4 = func_0x032a7be8(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_032a5604;
              }
            }
          }
          if (iVar3 != 0) {
            iVar3 = func_0x032a7be8(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar8 + 0x28) <= *(int *)(iVar3 + 0x58)) {
              iVar3 = func_0x032a7be8(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_032a5604;
            }
          }
          iVar3 = func_0x032b27b0(param_1,iVar8);
          if (iVar3 != 0) {
            return iVar8;
          }
        }
      }
LAB_032a5604:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

