
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018bec7c(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  
  pcVar7 = (char *)(_UNK_018bf268 + 0x18bec9c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018bf26c + 0x18becb0));
    func_0x01438628(*(undefined4 *)(_UNK_018bf270 + 0x18becbc));
    func_0x01438628(*(undefined4 *)(_UNK_018bf274 + 0x18becc8));
    func_0x01438628(*(undefined4 *)(_UNK_018bf278 + 0x18becd4));
    func_0x01438628(*(undefined4 *)(_UNK_018bf27c + 0x18bece0));
    func_0x01438628(*(undefined4 *)(_UNK_018bf280 + 0x18becec));
    func_0x01438628(*(undefined4 *)(_UNK_018bf284 + 0x18becf8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1445,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1445,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_028a368c + 0x28a35ac);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a3690 + 0x28a35c0),param_1,0);
      *pcVar7 = '\x01';
    }
    func_0x024f56c0(&uStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar9,uVar10,&stack0xffffffd0,uVar6,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a3694 + 0x28a367c));
    return iVar2;
  }
  iVar2 = FUN_018bd3dc(param_1);
  fVar1 = _UNK_018bf15c;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_018bf288 + 0x18bed78);
    while( true ) {
      iVar9 = func_0x018c3218(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar2) break;
      func_0x018c4524(param_1);
      iVar9 = func_0x018c3218(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x0152983c(iVar9,iVar2,*puVar8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x24) == 0) {
        iVar3 = func_0x018c3704(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar9 + 0xc) * fVar1;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_40 = (uint)lVar13;
        uStack_44 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar3 = func_0x018c3704(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar9 + 0x10) * fVar1;
        iStack_3c = iVar2;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_48 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar2 = func_0x018c3704(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(undefined4 *)(iVar2 + 0x50);
        uVar6 = *(undefined4 *)(iVar2 + 0x54);
        if (*(int *)(**(int **)(_UNK_018bf28c + 0x18beec8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_018bf290 + 0x18beee8));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar14 = func_0x026ffbe0(iVar2,0);
        if (*(int *)(**(int **)(_UNK_018bf294 + 0x18bef1c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x02aedf90(uVar10,uVar6,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0);
        iVar4 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        iVar2 = iStack_3c;
        puVar8 = *(undefined4 **)(_UNK_018bf298 + 0x18bef70);
        if (iVar4 == 0) {
          if (*(int *)(**(int **)(_UNK_018bf29c + 0x18bef80) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018bf2a0 + 0x18bef9c));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar14 = func_0x026ffbe0(iVar4,0);
          uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
          if (uStack_44 < uVar5 || uVar5 - uStack_44 < (uint)(uStack_40 <= (uint)uVar14)) {
            if (*(int *)(**(int **)(_UNK_018bf2a4 + 0x18befdc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018bf2a8 + 0x18beff8));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar14 = func_0x026ffbe0(iVar4,0);
            uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
            if (uVar5 <= uStack_48 && (uint)((uint)lVar13 <= (uint)uVar14) <= uVar5 - uStack_48)
            goto LAB_018bf028;
          }
        }
        else {
LAB_018bf028:
          iVar4 = func_0x018c4524(param_1);
          if (iVar4 == 0) {
            if (0 < *(int *)(iVar9 + 0x1c)) {
              iVar4 = func_0x018c3704(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar10 = *(undefined4 *)(iVar9 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f0540(iVar4,uVar10,**(undefined4 **)(_UNK_018bf2b4 + 0x18bf1a4));
              if (iVar4 != 0) {
                iVar4 = func_0x018c3704(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar4 + 0x30);
                uVar10 = *(undefined4 *)(iVar9 + 8);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x024f05d4(iVar4,uVar10,**(undefined4 **)(_UNK_018bf2b8 + 0x18bf1f0));
                if (*(int *)(iVar9 + 0x1c) <= iVar4) goto LAB_018bf248;
              }
            }
            if (iVar3 != 0) {
              iVar3 = func_0x018c3704(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) goto LAB_018bf248;
            }
          }
          else {
            if (0 < *(int *)(iVar9 + 0x1c)) {
              iVar4 = func_0x018c3704(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar10 = *(undefined4 *)(iVar9 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f0540(iVar4,uVar10,**(undefined4 **)(_UNK_018bf2ac + 0x18bf080));
              if (iVar4 != 0) {
                iVar4 = func_0x018c3704(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar4 + 0x30);
                uVar10 = *(undefined4 *)(iVar9 + 8);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x024f05d4(iVar4,uVar10,**(undefined4 **)(_UNK_018bf2b0 + 0x18bf0cc));
                if (*(int *)(iVar9 + 0x1c) <= iVar4) {
                  iVar4 = func_0x018c3704(param_1);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_018bf248;
                }
              }
            }
            if (iVar3 != 0) {
              iVar3 = func_0x018c3704(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) {
                iVar3 = func_0x018c3704(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_018bf248;
              }
            }
          }
          iVar3 = func_0x018cfd04(param_1,iVar9);
          if (iVar3 != 0) {
            return iVar9;
          }
        }
      }
LAB_018bf248:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

