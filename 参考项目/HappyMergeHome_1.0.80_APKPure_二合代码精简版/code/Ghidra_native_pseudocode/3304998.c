
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03314998(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_033151d4 + 0x33149b4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_033151d8 + 0x33149c8));
    func_0x01438628(*(undefined4 *)(_UNK_033151dc + 0x33149d4));
    func_0x01438628(*(undefined4 *)(_UNK_033151e0 + 0x33149e0));
    func_0x01438628(*(undefined4 *)(_UNK_033151e4 + 0x33149ec));
    func_0x01438628(*(undefined4 *)(_UNK_033151e8 + 0x33149f8));
    func_0x01438628(*(undefined4 *)(_UNK_033151ec + 0x3314a04));
    func_0x01438628(*(undefined4 *)(_UNK_033151f0 + 0x3314a10));
    func_0x01438628(*(undefined4 *)(_UNK_033151f4 + 0x3314a1c));
    func_0x01438628(*(undefined4 *)(_UNK_033151f8 + 0x3314a28));
    func_0x01438628(*(undefined4 *)(_UNK_033151fc + 0x3314a34));
    func_0x01438628(*(undefined4 *)(_UNK_03315200 + 0x3314a40));
    func_0x01438628(*(undefined4 *)(_UNK_03315204 + 0x3314a4c));
    func_0x01438628(*(undefined4 *)(_UNK_03315208 + 0x3314a58));
    func_0x01438628(*(undefined4 *)(_UNK_0331520c + 0x3314a64));
    func_0x01438628(*(undefined4 *)(_UNK_03315210 + 0x3314a70));
    func_0x01438628(*(undefined4 *)(_UNK_03315214 + 0x3314a7c));
    func_0x01438628(*(undefined4 *)(_UNK_03315218 + 0x3314a88));
    func_0x01438628(*(undefined4 *)(_UNK_0331521c + 0x3314a94));
    func_0x01438628(*(undefined4 *)(_UNK_03315220 + 0x3314aa0));
    func_0x01438628(*(undefined4 *)(_UNK_03315224 + 0x3314aac));
    func_0x01438628(*(undefined4 *)(_UNK_03315228 + 0x3314ab8));
    func_0x01438628(*(undefined4 *)(_UNK_0331522c + 0x3314ac4));
    func_0x01438628(*(undefined4 *)(_UNK_03315230 + 0x3314ad0));
    func_0x01438628(*(undefined4 *)(_UNK_03315234 + 0x3314adc));
    func_0x01438628(*(undefined4 *)(_UNK_03315238 + 0x3314ae8));
    func_0x01438628(*(undefined4 *)(_UNK_0331523c + 0x3314af4));
    func_0x01438628(*(undefined4 *)(_UNK_03315240 + 0x3314b00));
    func_0x01438628(*(undefined4 *)(_UNK_03315244 + 0x3314b0c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8539,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03315248 + 0x3314b74) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0331524c + 0x3314b90));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_03315250 + 0x3314bb0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x270);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03315254 + 0x3314be4));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03315258 + 0x3314bfc));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_0331525c + 0x3314c14));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_03315260 + 0x3314c44);
      do {
        if (*(int *)(**(int **)(_UNK_03315264 + 0x3314c50) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03315268 + 0x3314c6c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_0331526c + 0x3314c8c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x270);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_03315270 + 0x3314cc0));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_03315274 + 0x3314cec));
        if (*(int *)(**(int **)(_UNK_03315278 + 0x3314d04) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_03313b24(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_0331527c + 0x3314d78));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_03315280 + 0x3314db4));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_0331528c + 0x3314e28) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_03315290 + 0x3314e38)
                                     );
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03315294 + 0x3314e8c));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_03315298 + 0x3314ea0));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_0331529c + 0x3314ec4));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_033152a0 + 0x3314ef0));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_033152a4 + 0x3314f24) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_033152a8 + 0x3314f44));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_033152ac + 0x3314fa0)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_033152b0 + 0x3314fe0);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar10 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar9 + 1;
                        *(undefined4 *)(iVar7 + uVar9 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x04cd29cc(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_033152b4 + 0x3315034));
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (0 < *(int *)(iVar5 + 0xc)) {
                  iVar7 = 0;
                  while( true ) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= iVar7) break;
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_033152c0 + 0x331508c)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_033152c4 + 0x33150b8));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_033152c8 + 0x33150d8));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_033152cc + 0x3315104));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03315284 + 0x3314dd4));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_03315288 + 0x3314e10));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8539,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

